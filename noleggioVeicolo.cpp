#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
#include "C:\Program Files\PostgreSQL\14\include\libpq-fe.h"
// Commando per compilare : g++ -o .\noleggioVeicolo noleggioVeicolo.cpp -lpq -L"C:\Program Files\PostgreSQL\14\lib"
using std::cout,
    std::cerr,
    std::cin,
    std::endl,
    std::left,
    std::setw;

PGconn *connessioneDB(const char *dbname, const char *user, const char *password, const char *hostaddr, const char *port)
{
    char conninfo[250];
    sprintf(conninfo, "dbname=%s user=%s password=%s hostaddr=%s port=%s",
            dbname, user, password, hostaddr, port);
    PGconn *conn = PQconnectdb(conninfo);
    if (PQstatus(conn) == CONNECTION_BAD)
    {
        cerr << "Connessione fallita con errore: " << PQerrorMessage(conn);
        PQfinish(conn);
        exit(1);
    }
    cout << "Connessione stabilita" << endl;
    return conn;
}

bool controllaRes(const PGconn *conn, PGresult *res)
{
    if (PQresultStatus(res) != PGRES_TUPLES_OK)
    {
        cerr << "Non è stato restituito un risultato valido " << PQerrorMessage(conn);
        PQclear(res);
        return 0;
    }
    return 1;
};

void printRes(const PGconn *conn, PGresult *r)
{
    if (controllaRes(conn, r))
    {
        int tuple = PQntuples(r);
        int campi = PQnfields(r);

        cout << "\n";
        for (int i = 0; i < campi; ++i)
        {
            cout << left << setw(25) << PQfname(r, i);
        }
        cout << "\n";
        for (int i = 0; i < tuple; ++i)
        {
            for (int n = 0; n < campi; ++n)
            {
                cout << left << setw(25) << PQgetvalue(r, i, n);
            }
            cout << '\n';
        }

        cout << '\n';
    }
    PQclear(r);
    r = 0;
}

void eseguiQuery(PGconn *conn, const char *query, int nParams, const char *const parametri[])
{
    PGresult *res;
    if (nParams < 1)
    {
        res = PQexec(conn, query);
    }
    else
    {
        res = PQexecParams(conn, query, nParams, NULL, parametri, NULL, NULL, 0);
    }
    printRes(conn, res);
}

int main()
{
    PGconn *conn = connessioneDB("noleggioVeicolo", "postgres", "1234", "127.0.0.1", "5432");
    const char *menu = {"    MENU\n"
                        "# - Descrizione\n\n"
                        "0 - Per uscire;\n"
                        "1 - Mostrare gli utenti che stanno effettuando un noleggio in una certa data;\n"
                        "2 - Mostrare in ordine decrescente i top 10 modelli piu' noleggiati dagli utenti;\n"
                        "3 - Mostrare in ordine i modelli valutati meglio dagli utenti con almeno n recensioni per modello;\n"
                        "4 - Mostrare le top 5 aziende che forniscono piu' veicoli;\n"
                        "5 - Mostrare i veicoli disponibili tra un dato periodo e in un determinato luogo;\n"
                        "6 - Mostrare per un noleggio il costo totale includendo il costo del veicolo noleggiato e costo del optional in base alla durata del noleggio.\n    Applicando se disponibile l'eventuale sconto;\n"};
    const char *query[6] = {
        "SELECT U.Email, U.Nome, U.Cognome, N.Targa,  N.DataRitiro, N.DataRiconsegna \
        FROM NOLEGGIO N JOIN UTENTE U ON N.Email = U.Email \
        WHERE $1::date BETWEEN N.DataRitiro AND N.DataRiconsegna;",

        "SELECT M.Modello, Count(*) AS NumNoleggi \
        FROM NOLEGGIO N JOIN VEICOLO V ON N.Targa = V.Targa \
            JOIN MODELLO M ON M.IdModello = V.IdModello \
        GROUP BY M.Modello \
        ORDER BY COUNT(*) DESC \
        LIMIT 10;",

        "SELECT M.Modello, ROUND(AVG(R.Stelle),2) AS STELLE, COUNT(*) AS NumRecensioni \
        FROM RECENSIONE R JOIN MODELLO M ON R.IdModello = M.IdModello \
        GROUP BY M.IdModello, M.Modello \
        HAVING COUNT(*) >= $1::INT \
        ORDER BY AVG(R.Stelle) DESC, NumRecensioni DESC;",

        "SELECT A.NomeAzienda, count(*) AS VeicoliForniti  \
        FROM VEICOLO V  \
            JOIN AZIENDA A  \
            ON V.CodiceAziendaFornitrice = A.CodiceAzienda \
        GROUP BY A.NomeAzienda \
        ORDER BY count(*) DESC \
        LIMIT 5;",

        "SELECT M.Modello, count(*) AS Disponibilita \
        FROM VEICOLO V  \
            JOIN MODELLO M \
            ON V.IdModello = M.IdModello \
        WHERE V.Targa IN (SELECT L.Targa \
            FROM LOCALIZZATO L \
                JOIN PARCHEGGIO P \
                ON P.CodiceParcheggio = L.CodiceParcheggio \
            WHERE (P.Regione = $1::VARCHAR(50) AND P.Citta=$2::VARCHAR(50)) \
            EXCEPT \
            SELECT  N.Targa \
            FROM NOLEGGIO N  \
            WHERE NOT ($3::DATE < N.DataRitiro OR $4::DATE > N.DataRiconsegna)) \
        GROUP BY M.Modello;",

        "SELECT PrVe.IdNoleggio, CAST(PrVe.TotalePrezzoVeicolo AS DECIMAL(9,2)), CAST(PrOp.TotalePrezzoOptional AS DECIMAL(9,2)) AS TotalePrezzoOptional, PrVe.PercentualeSconto, CAST((PrVe.TotalePrezzoVeicolo + PrOp.TotalePrezzoOptional) *(100-PrVe.PercentualeSconto)/100 AS DECIMAL(9,2)) AS ImportoTotale \
        FROM PrVe JOIN PrOp ON PrVe.IdNoleggio = PrOP.IdNoleggio \
        WHERE PrVe.IdNoleggio = $1::integer;"};

    int n = 0;

    char *parametri[4];

    while (true)
    {
        for (int i = 0; i < 4; i++)
        {
            parametri[i] = new char();
        }
        cout << menu << endl;
        cout << "Query desiderata : ";
        cin >> n;

        if (n == 0)
        {
            break;
        }
        else if (n < 0 || n > 6)
        {
            cout << endl;
            cout << "Query non valida, riprova!!" << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << "Inserire la data desiderata con formato [AAAA-MM-GG] : ";
                cin >> parametri[0];
                eseguiQuery(conn, query[n - 1], 1, parametri);
            }
            else if (n == 3)
            {
                cout << "Inserire le recensioni minime : ";
                cin >> parametri[0];
                cout << "I modelli meglio recensiti con almeno " << parametri[0] << " recensioni sono i seguenti:" << endl;
                eseguiQuery(conn, query[n - 1], 1, parametri);
            }
            else if (n == 5)
            {
                cout << "Inserire la Regione di ritiro : ";
                cin >> parametri[0];
                cout << "Inserire la Citta' di ritiro : ";
                cin >> parametri[1];
                cout << "Inserire la data di ritiro con formato [AAAA-MM-GG]: ";
                cin >> parametri[3];
                cout << "Inserire la data di riconsegna con formato [AAAA-MM-GG]: ";
                cin >> parametri[2];
                cout << "\nI modelli disponibili in " << parametri[0] << " a " << parametri[1] << ";\nCon data di ritiro : " << parametri[3] << " e data di riconsegna : " << parametri[2] << " sono i seguenti :" << endl;
                eseguiQuery(conn, query[n - 1], 4, parametri);
            }
            else if (n == 6)
            {
                cout << "Inserire l'id del Noleggio: ";
                cin >> parametri[0];
                eseguiQuery(conn, query[n - 1], 1, parametri);
            }
            else
            {
                eseguiQuery(conn, query[n - 1], 0, nullptr);
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
            cin.clear();
        }
    }
    PQfinish(conn);

    return 0;
}