

**RentToGo**

**1) Abstract**

RentToGo è un’azienda che offre dal 2020 un accorto e minuzioso servizio di car rental nato nel territorio

Italiano. La sentita necessità di farsi spazio nel mondo digitale per mantenere quello che dalla

fondazione è stata la linea guida dell’azienda, l’attenzione nei confronti delle esigenze dei clienti e

l’esigenza di rendere il servizio di noleggio pratico, vantaggioso e personalizzabile. Ciò ha permesso di

espandere il mercato aziendale e incrementarne notevolmente i numeri che attualmente vanta all’incirca

100.000 utenti.

Ora online è possibile cercare l’auto che più si adatta ai bisogni del consumatore, nello specifico dopo

aver effettuato la registrazione l’utente munito di patente potrà accedere alla vasta gamma di veicoli a

disposizione. Superata la fase di registrazione l’utente in base alle proprie necessità temporali e locative

potrà scegliere che tipo di mezzo noleggiare tra auto, furgone o camper, potrà personalizzare il veicolo e

ricercare le sue preferenze tra: modello, portata massima, tipo di cambio, numero di posti e con aria

condizionata. Una volta selezionato il mezzo, già provvisto della franchigia furto e danni associata,

passerà alla fase di inserimento degli optional desiderati (giornalieri o non).

In determinati periodi il noleggio può prevedere sconti sull’importo finale in base alla presenza o meno di

un codice sconto inserito dall'utente, tale codice è fornito dal sito per pubblicitaria o tramite email per

ringraziare la fedeltà l’utente.

A conclusione dell’esperienza il cliente è invitato a lasciare una recensione sul modello del veicolo

noleggiato per migliorare la ricerca degli altri clienti in base alle proprie necessità.

**2) Analisi dei requisiti**

**Descrizione testuale**

Il sito permette agli utenti di effettuare la registrazione per poter effettuare vari noleggi, accedere ogni

qual volta si desideri per controllare i noleggi effettuati, conoscerne i vari dettagli tra cui importo pagato,

il veicolo noleggiato e la possibilità di scrivere una recensione per ogni modello di veicolo che si ha

noleggiato.

Nella base di dati sono presenti i dati degli **utenti** registrati nel sito, per ogni utente sono noti:

\- Indirizzo email

\- Password

\- Nome

\- Cognome

\- Data di nascita

\- Luogo di nascita

Durante la registrazione viene richiesto di immettere la propria **patente**, così da poter verificarne la

validità e nello specifico per consentire all’utente di effettuare un noleggio, per ogni patente sono noti:

\- Numero patente

\- Luogo di rilascio

\- Link foto della patente (uploadato tramite apposito form, hostato e protetto nel server del sito)

\- Data di rilascio

\- Data di scadenza

I veicoli presenti su RentToGo non sono di nostra proprietà bensì vengono forniti al noleggio da

molteplici aziende private specializzate nel settore. Lo scopo di RentToGo è di fare da tramite per trovare

la miglior combinazione in base alle proprie esigenze e facilitare l’accessibilità.

Di ogni **azienda** sono noti:

\- Codice azienda

\- Nome azienda

\- Numero di telefono

\- Indirizzo email

\- Indirizzo postale (Regione, Città, Via, Numero civico)

Inoltre è possibile che alcune aziende fornitrici o aziende assicuratrici permettano di assicurare il veicolo

noleggiato, offrendo una tutela del proprio patrimonio dal rischio di dover pagare, a titolo di risarcimento,

i danni procurati a terzi a causa di una condotta colpevole.





Per ogni **assicurazione** vengono memorizzati:

\- Targa del veicolo assicurato

\- Azienda Assicuratrice

\- Franchigia furto

\- Franchigia danni

RentToGo offre la possibilità di noleggiare vari veicoli forniti da varie aziende.

Di ogni **veicolo** disponibile al noleggio sono memorizzati:

\- Targa

\- Azienda fornitrice

\- Modello

\- Km percorsi

\- Prezzo base giornaliero

Per ogni veicolo è associato un **modello**, sono disponibili vari modelli, dei quali sono noti:

\- Nome del modello (Non univoco)

\- Link dell’immagine rappresentativo del modello (hostato sul server del sito)

\- Tipo di cambio

\- Tipo di motore

\- Numero di posti

\- Presenza aria condizionata

\- Portata massima del veicolo

\- Tipo del veicolo (al momento offriamo noleggio di auto, furgoni e camper)

Ogni vettura disponibile al noleggio offre la possibilità di scelta degli optional, servizi aggiuntivi che

migliorano la qualità dell’esperienza di guida, a costo di un leggero aumento del prezzo di noleggio.

Di tali **optional** questi sono noti :

\- Nome optional

\- Descrizione

\- Prezzo (prezzo che può variare se è giornaliero oppure prezzo per noleggio)

\- Indicatore se il prezzo è giornaliero

L’utente, scelto il tipo e modello di autovettura desiderato, ha la possibilità di effettuare il pagamento

attraverso diversi circuiti. Per effettuare un pagamento verrà memorizzata la carta dell’utente.

Della **carta** utilizzata dall’utente viene memorizzato:

\- Numero della carta

\- Circuito (Mastercard, Visa, …)

\- Intestatario

\- Data scadenza

Per ogni utente sarà associata una o più carte in un apposito **portafoglio**.

I pagamenti vengono autorizzati attraverso un sito esterno, rilevato automaticamente dal circuito.

Per ogni **pagamento** effettuato si memorizzano:

\- l’importo

\- Data del pagamento

E’ possibile che il sito preveda durante un certo periodo uno **sconto** usufruibile per noleggi con ritiro del

veicolo entro la data di scadenza dello sconto, di questo vengono registrati:

\- Codice da utilizzare per riscattare lo sconto

\- Percentuale di sconto

\- Data di scadenza dello sconto

Il ritiro del veicolo noleggiato deve essere effettuato nel giorno e orario prestabilito, che viene scelto

dall’utente è successivamente confermato attraverso una mail contenente informazioni sulle modalità e

tempistiche per il ritiro. Il veicolo dovrà essere ritirato dal parcheggio comunicato che è allo stesso tempo

il parcheggio in cui è localizzato, con la possibilità di riconsegnare il veicolo nello stesso luogo oppure in

un parcheggio diverso, sempre rispettando gli orari prestabiliti.

Di ogni **parcheggio** è noto:

\- Codice parcheggio (univoco seguendo uno standard nazionale)

\- Indirizzo postale (Regione, Città, Via, Numero civico)

\- Capienza massima





Di ogni **noleggio** effettuato si memorizzano:

\- Email dell’utente

\- Targa del veicolo noleggiato

\- Data noleggio (coincide con la data del pagamento)

\- Luogo di ritiro (parcheggio scelto in base alla disponibilità del veicolo nel relativo parcheggio)

\- Ora ritiro

\- Data ritiro

\- Luogo di riconsegna (può essere lo stesso del ritiro oppure un parcheggio totalmente diverso)

\- Ora riconsegna

\- Data riconsegna

\- Codice sconto utilizzato al momento del noleggio (se provvisto)

Per ogni noleggio effettuato il cliente può scrivere una **recensione** sul modello del veicolo che ha

adoperato, la recensione relativa al modello dovrà contenere un punteggio che va da 0 a 10 e una breve

descrizione di massimo 300 caratteri.

**Glossario dei termini**

**Termine**

**Descrizione**

**Collegamenti**

Utente

Utente registrato nel sito

Patente, Carta, Noleggio,

Modello

Patente

Azienda

Modello

Veicolo

Informazioni sulla patente dell’utente che ha deciso di

registrarsi nel sito

Utente

Azienda partner che fornisce e/o assicura i veicoli

noleggiabili nel sito

Veicolo

Rappresentazione del modello dei vari Veicoli presenti nel

nostro sito

Utente, Veicolo

Specifico mezzo che viene noleggiato dal cliente con le

caratteristiche selezionate, fornito da una determinata

azienda ed eventualmente con l’eventuale assicurazione

relativa

Azienda, Parcheggio,

Noleggio, Modello

Optional

Dispositivo non previsto nell'allestimento di serie capace di Noleggio

ottimizzare le caratteristiche funzionali e tecniche del

veicolo

Carta

Metodo di pagamento utilizzato per pagare gli ordini.

Utente, noleggio

Sconto

Coupon offerto dal sito e fruibile sul sito per l’acquisto del

servizio di noleggio ad un prezzo minore

Noleggio

Parcheggio

Locazione in cui si troverà e/o avverrà la riconsegna del

veicolo noleggiato

Veicolo, noleggio

**Operazioni**

**OPERAZIONE**

**TIPO**

**FREQUENZA**

100 al giorno

1 - Inserimento di un nuovo utente

2 - Inserimento di un nuovo noleggio

S

S

L

500 alla settimana

10000 al giorno

3 - Visualizzazione dei veicoli disponibili in un

determinato periodo e determinato luogo

4 - Inserimento di una nuova recensione

S

50 al giorno





5 - Inserimento di un nuovo pagamento

6 - Visualizzare il punteggio medio di un modello

7 - Stampare tutte le recensioni di un modello

8 - Inserimento di un nuovo Veicolo

S

L

L

S

500 alla settimana

2000 al giorno

500 al giorno

10000 all’anno

9 - Visualizzazione delle entrate giornaliera,

somma di tutti i pagamenti (importi) effettuati

in quella giornata

L

1 al giorno

**3) Progettazione Concettuale**

**Lista entità**

**Se non specificato l’attributo è NOT NULL, PK = Primary Key**

● MODELLO:

◆

IdModello: SERIAL

PK

●

◆

◆

◆

◆

LinkImmagine: VARCHAR(255)

Modello: VARCHAR(50)

Cambio BOOLEAN

Motore VARCHAR(50)

●

('benzina','diesel','GPL','ibrido benzina','ibrido diesel','ibrido plug-in benzina','ibrido

plug-in diesel','metano','elettrico')

◆

◆

Posti: INT

●

Posti > 0

PortataMassima: INT

●

PortataMassima > 0

◆

◆

AriaCondizionata: BOOLEAN

TipoVeicolo: VARCHAR(15)

●

('Auto', 'Camper', 'Furgone')

● AZIENDA:

◆

CodiceAzienda: INT

●

PK

◆

◆

◆

◆

NomeAzienda: VARCHAR(50)

Telefono: VARCHAR(10)

Email: VARCHAR(100)

Indirizzo: attributo composto

●

●

●

●

Regione VARCHAR(50)

Citta VARCHAR(50)

Via VARCHAR(50)

NumeroCivico VARCHAR(10)

● OPTIONAL:

◆

Titolo: VARCHAR(50)

●

PK

◆

◆

◆

Descrizione VARCHAR(255)

Prezzo DECIMAL(9,2)

IsGiornaliero BOOLEAN

● PATENTE:

◆

NumeroPatente: VARCHAR(9)

●

PK

●

Formato: [A-Z][A-Z][0-9][0-9][0-9][0-9][0-9][A-Z][A-Z]

◆

◆

◆

LuogoRilascio VARCHAR(50)

DataRilascio DATE

DataScadenza DATE





◆

LinkFoto VARCHAR(255)

● UTENTE

◆

Email VARCHAR(100)

PK

●

◆

◆

◆

◆

◆

◆

Password VARCHAR(50)

Nome VARCHAR(50)

Cognome VARCHAR(50)

DataNascita DATE

LuogoNascita VARCHAR(50)

NumeroPatente VARCHAR(9)

●

UNIQUE

● CARTA

◆

NumeroCarta CHAR(16)

PK

●

◆

◆

◆

Circuito VARCHAR(50)

DataScadenza DATE

Intestatario VARCHAR(50)

● PARCHEGGIO

◆

CodiceParcheggio INT

PK

Indirizzo: attributo composto

●

◆

●

●

●

●

Regione VARCHAR(50)

Citta VARCHAR(50)

Via VARCHAR(50)

NumeroCivico VARCHAR(10)

◆

Capienza INT

Capienza > 0

●

● SCONTO

◆

CodiceSconto VARCHAR(15)

PK

●

◆

◆

PercentualeSconto INT

DataScadenza DATE

● VEICOLO

◆

Targa VARCHAR(7)

●

PK

●

Formato: [A-Z][A-Z][0-9][0-9][0-9][A-Z][A-Z]

◆

◆

◆

IdModello INT

CodiceAziendaFornitrice INT

PrezzoBaseAlGiorno DECIMAL(9,2)

●

PrezzoBaseAlGiorno > 0

KM\_Percorsi INT

KM\_Percorsi>=0

◆

●

● NOLEGGIO

◆

◆

◆

◆

◆

◆

◆

◆

◆

◆

◆

Email VARCHAR(100)

Targa VARCHAR(7)

DataNoleggio DATE

OraNoleggio TIME

CodiceParcheggioRitiro INT

DataRitiro DATE

OraRitiro TIME

CodiceParcheggioRiconsegna INT

DataRiconsegna DATE

OraRiconsegna TIME

CodiceSconto VARCHAR(15)

●

Può essere NULL





**Tabella delle relazioni**

**Relazione**

**Entità coinvolte Descrizione**

**Attributi**

Nessuno

Portafoglio

Utente (0, N)

Carta (1, N)

un utente può aver associato zero o più carte, e

una carta può essere usata da uno o più utenti

Possiede

Utente (1, 1)

Patente (1, 1)

un utente possiede una e una sola patente, che

a sua volta ha un solo proprietario

Nessuno

Pagamento

Carta (0, N)

Noleggio (1, 1)

per mezzo di una carta si possono effettuare

zero o più noleggi mentre, un noleggio è

associato ad una sola carta

DataPag:

DATE

Importo:

DECIMAL(9,2)

Acquisto

Utente (0, N)

Noleggio (1, 1)

un utente può effettuare zero o più volte un

noleggio, mentre un noleggio è relativo ad un

solo cliente

Nessuno

Recensione Utente (0, N)

Modello (0, N)

un utente può recensire zero o più modelli di

veicoli e allo stesso modo un modello può

essere recensito da zero o più clienti

Stelle INT >=0,

<=10

Riguardante Veicolo (0, N)

Noleggio (1, 1)

un veicolo può essere oggetto di zero o più

noleggi, mentre un noleggio specifico è relativo

a un solo veicolo

Nessuno

Nessuno

Nessuno

Appartiene

Localizzato

Assicura

Modello (0, N)

Veicolo (1, 1)

un veicolo appartiene ad un solo specifico

modello mentre ad un modello possono

appartenere zero o più veicoli

Parcheggio (0, N) in un parcheggio possono trovarsi zero o più

Veicolo (0, 1)

veicoli, un veicolo invece può trovarsi al più in

un solo parcheggio

Azienda (0, N)

Veicolo (1, 1)

un’azienda può assicurare zero o più veicoli, ma FranchigiaFurto

un veicolo può essere stato assicurato da una

sola azienda

DECIMAL(9,2)

\>=0

FranchigiaDanni

DECIMAL(9,2)

\>=0

Fornisce

Azienda (0, N)

Veicolo (1, 1)

un’azienda può fornire zero o più veicoli, ogni

veicolo è fornito da una sola azienda

Nessuno

Comprende Noleggio (0, N)

Optional (0, N)

un noleggio può comprendere zero o più

determinati optional e viceversa un optional può

essere previsto in zero o più noleggi

Nessuno

Prevede

Ritiro

Noleggio (0, 1)

Sconto (0, N)

un noleggio può comprendere o meno uno

sconto e viceversa uno può essere previsto in

zero o più noleggi

Nessuno

Noleggio (1, 1)

ogni noleggio ha un punto di ritiro (parcheggio),

OraRitiro TIME

Parcheggio (0, N) in ogni parcheggio possono essere ritirati i

veicoli di zero o più noleggi

DataRitiro DATE

Riconsegna Noleggio (1, 1)

ogni noleggio ha un punto di riconsegna

OraRiconsegna

TIME

DataRiconsegna

DATE

Parcheggio(0, N) (parcheggio), in ogni parcheggio possono

essere riconsegnati veicoli di zero o più noleggi





**Vincoli non rappresentabili tramite schema E-R:**

● Un utente può recensire un modello solo se ha noleggiato un veicolo di quel modello almeno una

volta

● Un utente non può noleggiare un qualsiasi Veicolo in quanto prima di effettuare il noleggio viene

eseguita una query per mostrare i Veicoli disponibili nell’arco di tempo e luogo richiesto. Quindi un

Veicolo può essere noleggiato solo se non è già “prenotato” in tale periodo e in tale luogo.

● Un nuovo veicolo non può essere localizzato in un parcheggio con una disponibilità di posti minore

di 0 (tramite una query prima dell’inserimento si può capire se è possibile inserire un nuovo veicolo

nel parcheggio).

● Al momento del ritiro di un veicolo Localizzato.codiceParcheggio diventerà NULL perché è stato

preso dal consumatore e verrà modificato quando verrà consegnato.

● Se il nome dell’azienda si ripete due volte ciò significa che la stessa azienda si trova in due sedi

diverse, per questo le aziende vengono distinte in base all’Id dell’Azienda

**Vincoli di derivazione:**

● L’attributo **Importo** della relazione pagamento corrisponde al prodotto tra la durata del noleggio

(differenza tra la data di riconsegna e la data di ritiro) e il prezzo base giornaliero del veicolo

noleggiato, sommato poi agli eventuali optional inclusi con il noleggio (moltiplicati per la durata se

hanno una tariffa giornaliera), se presente viene applicato uno sconto.

**Schema concettuale**

**4) Progettazione Logica**

**4.1) Ristrutturazione**

**Analisi delle ridondanze**

L’attributo “**Importo**” nella relazione “**Pagamento**” è ridondante in quanto è derivabile tramite il prodotto

tra la durata del noleggio (differenza tra la data di riconsegna e la data di ritiro) e il prezzo base

giornaliero del veicolo noleggiato, sommato poi agli eventuali optional inclusi con il noleggio (moltiplicati

per la durata se hanno una tariffa giornaliera) e infine, se presente, viene applicato lo sconto.





Si prevede la seguente operazione :

\1) Visualizzazione delle entrate giornaliera, somma di tutti i pagamenti (importi) effettuati in quella

giornata (1 volta al giorno)

Tabella dei volumi

Concetto

Carta

Costrutto

Volume

70.000

50.000

50.000

40.000

50.000

9

E

E

R

E

R

E

R

E

R

Noleggio

Pagamento

Veicolo

Riguardante

Optional

Comprende

Sconto

150.000

3

Prevede

15.000

La tabella dei volumi è stata calcolata mediamente ipotizzando una base di 100.000 utenti dal 2020 (2

anni di servizio) ognuno dei quali può avere effettuato zero o più noleggi,una media di 25000 veicoli

noleggiati annuali (500 a settimana), una media di 3 optional per noleggio e il 30% dei noleggi creati con

uno sconto.





**Assenza di ridondanza**

Tabella accessi operazione 1

Concetto

Noleggio

Pagamento

Veicolo

Costrutto

Accessi

Tipo

L

E

R

E

R

E

R

E

R

1

x71

x71

x71

x71

x71

x71

x71

x71

1

L

1

L

Riguardante

Optional

1

L

3

L

Comprende

Sconto

3

L

0,3

0,3

L

Prevede

L

In quanto lo sconto è presente per il 30% dei noleggi gli accessi in media sono 0,3 per Sconto e

Prevede.

Siccome ogni settimana si effettuano circa 500 noleggi significa che al giorno in media ne abbiamo 71.

Costo giornaliero operazione 1 : 71\*4+71\*3+71\*0,3 =752,6 accessi al giorno

**Presenza di ridondanza**

Tabella accessi operazione 1

Concetto

Noleggio

Pagamento

Veicolo

Costrutto

Accessi

Tipo

L

E

R

E

R

E

R

E

R

0

1

0

0

0

0

0

0

x71

x71

x71

x71

x71

x71

x71

x71

L

L

Riguardante

Optional

L

L

Comprende

Sconto

L

L

Prevede

L

Costo giornaliero operazione : 71 accessi al giorno

Per l’inserimento la prima volta dell’importo si utilizzano 21.2 accessi (1\*4+3\*2+0.3\*2)\*2 e ogni importo

(Decimal(9,2)) occupa in memoria circa 5 byte.

In presenza di ridondanza si diminuiscono gli accessi di 10 volte per ogni richiesta di lettura dell’importo

di un noleggio, i quali possono essere per :

\- La visualizzazione degli storici d’acquisto di un cliente

\- Calcoli per i guadagni di una giornata

In conclusione l’attributo “Importo” viene mantenuto e calcolato solo una volta al momento del

pagamento.





**Eliminazione delle generalizzazioni**

**Generalizzazione**

**Risoluzione**

Modello ← Auto, Furgone, Camper

Le entità Auto, Furgone e Camper vengono accorpate in

(Generalizzazione parziale ed esclusiva) Modello perché rappresentano lo stesso concetto, viene

aggiunto l’attributo per distinguere i vari tipi:

● TipoVeicolo: VARCHAR(15)

○ NOT NULL

L’attributo TipoVeicolo accetta solo i seguenti input :

● {‘Auto’, ‘Furgone’, ‘Camper’}

Azienda ← Assicuratore, Fornitore

(Generalizzazione totale e sovrapposta)

La generalizzazione verso Azienda totale e sovrapposta

viene eliminata accorpando i figli all’interno del padre in

quanto concettualmente simili e/o coincidenti.

I figli non aggiungono informazioni aggiuntive al padre.

L'azienda fornitrice può allo stesso tempo essere

assicuratrice e viceversa.

Le relazioni Assicura e Fornisce ora coinvolgono entrambe

Veicolo (1, 1) e Azienda (0, N)

**Scelta degli identificatori primari**

L’entità **Noleggio** inizialmente si identificava utilizzando **Targa, DataNoleggio** e **OraNoleggio**. Però dato

che l’entità Noleggio viene utilizzata in **Optional\_Noleggio** e **Pagamento** risulta più efficiente utilizzare

un solo identificativo numerico per velocizzare la ricerca sull’entità Noleggio, semplificando successivi

join e salvando anche spazio dalle tabelle coinvolte.

Si aggiunge l’attributo **IdNoleggio** (INT, auto Increment) all’entità Noleggio. Si rimuovono DataNoleggio,

in quanto tale informazione se mai richiesta sarà presente in Pagamento.DataPag in quanto coincidono.

Si rimuove OraNoleggio invece in quanto risulta poco significativa e non necessaria (aggiunto per

rendere possibile il noleggio dello stesso veicolo più volte al giorno).

**4.2) Creazione delle tabelle**

**Chiave primarie indicate con sottolineatura, mentre \* indica attributi con possibili null.**

**Modello**(IdModello, LinkImmagine, Modello, Cambio, Motore, Posti, PortataMassima, AriaCondizionata,

TipoVeicolo)

**Azienda**(CodiceAzienda, NomeAzienda, Telefono, Email, Regione, Citta, Via, NumeroCivico)

**Optional**(Titolo, Descrizione, Prezzo, IsGiornaliero)

**Patente**(NumeroPatente, LuogoRilascio, DataRilascio, DataScadenza, LinkFoto)

**Carta**(NumeroCarta, Circuito, DataScadenza, Intestatario)

**Parcheggio**(CodiceParcheggio, Regione, Citta, Via, NumeroCivico, Capienza)

**Sconto**(CodiceSconto, PercentualeSconto, DataScadenza)

**Utente**(Email, Password, Nome, Cognome, DataNascita, LuogoNascita, NumeroPatente)

\- NumeroPatente -> Patente.NumeroPatente

**Veicolo**(Targa, IdModello, CodiceAziendaFornitrice, PrezzoBaseAlGiorno, KM\_Percorsi)

\- IdModello -> Modello.IdModello

\- CodiceAziendaFornitrice -> Azienda.CodiceAzienda

**Assicurazione**(Targa, CodiceAziendaAssicuratrice, FranchigiaFurto, FranchigiaDanni)

\- Targa -> Veicolo.Targa

\- CodiceAziendaAssicuratrice -> Azienda.CodiceAzienda

**Recensione**(IdModello, Email, Stelle, Descrizione)

\- IdModello -> Modello.IdModello

\- Email -> Utente.Email

**Localizzato**(Targa, CodiceParcheggio\*)

\- Targa -> Veicolo.Targa

\- CodiceParcheggio -> Parcheggio.CodiceParcheggio

**Portafoglio**(Email, NumeroCarta)

\- Email -> Utente.Email

\- NumeroCarta -> Carta.NumeroCarta





**Noleggio**(IdNoleggio, Email, Targa, CodiceParcheggioRitiro, DataRitiro, OraRitiro,

CodiceParcheggioRiconsegna, DataRiconsegna, OraRiconsegna, CodiceSconto\*)

\- IdModello -> Modello.IdModello

\- Email -> Utente.Email

\- Targa -> Veicolo.Targa

\- CodiceParcheggioRitiro -> Parcheggio.CodiceParcheggio

\- CodiceParcheggioRiconsegna -> Parcheggio.CodiceParcheggio

\- CodiceSconto -> Sconto.CodiceSconto

**Optional\_Noleggio**(Titolo, IdNoleggio)

\- Titolo -> Optional.Titolo

\- IdNoleggio -> Noleggio.IdNoleggio

**Pagamento**(IdNoleggio, NumeroCarta, Importo, DataPag)

\- IdNoleggio -> Noleggio.IdNoleggio

\- NumeroCarta -> Carta.NumeroCarta

**Schema ristrutturato**

**5) Query e indici**

**Query**

1 - Mostrare gli utenti che stanno effettuando un noleggio in una certa data

SELECT U.Email, U.Nome, U.Cognome, N.Targa, N.DataRitiro, N.DataRiconsegna

FROM NOLEGGIO N JOIN UTENTE U ON N.Email = U.Email

WHERE '2022-07-14' BETWEEN N.DataRitiro AND N.DataRiconsegna;

(Output parziale)





2 - Mostrare in ordine decrescente i 10 modelli più noleggiati dagli utenti

SELECT M.Modello, Count(\*) AS NumNoleggi

FROM NOLEGGIO N JOIN VEICOLO V ON N.Targa = V.Targa

JOIN MODELLO M ON M.IdModello = V.IdModello

GROUP BY M.Modello

ORDER BY COUNT(\*) DESC

LIMIT 10;

3 - Mostrare in ordine i modelli valutati meglio dagli utenti con almeno n recensioni per modello

SELECT M.Modello, ROUND(AVG(R.Stelle),2) AS STELLE, COUNT(\*) AS NumRecensioni

FROM RECENSIONE R JOIN MODELLO M ON R.IdModello = M.IdModello

GROUP BY M.IdModello, M.Modello

HAVING COUNT(\*) >= 4

ORDER BY AVG(R.Stelle) DESC, NumRecensioni DESC;

4 - Mostrare le top 5 aziende che forniscono più veicoli

SELECT A.NomeAzienda, count(\*) AS VeicoliForniti

FROM VEICOLO V

JOIN AZIENDA A ON V.CodiceAziendaFornitrice = A.CodiceAzienda

GROUP BY A.NomeAzienda

ORDER BY count(\*) DESC

LIMIT 5;





5 - Mostrare i veicoli disponibili tra un dato periodo e in un determinato luogo

SELECT M.Modello, count(\*) AS Disponibilita

FROM VEICOLO V

JOIN MODELLO M ON V.IdModello = M.IdModello

WHERE V.Targa IN (SELECT L.Targa

FROM LOCALIZZATO L

JOIN PARCHEGGIO P ON P.CodiceParcheggio = L.CodiceParcheggio

WHERE (P.Regione = 'Veneto' AND P.Citta='Padova')

EXCEPT

SELECT N.Targa

FROM NOLEGGIO N

WHERE NOT ('2022-06-15' < N.DataRitiro OR '2022-06-12' > N.DataRiconsegna))

GROUP BY M.Modello;

6 - Mostrare per un noleggio il costo totale includendo il costo del veicolo noleggiato e costo del optional

in base alla durata del noleggio. Applicando se disponibile l'eventuale sconto.

CREATE VIEW PrVe AS

Select N.IdNoleggio as IdNoleggio, V.PrezzoBaseAlGiorno \* DATE\_PART('day',

N.DataRiconsegna::timestamp - N.DataRitiro::timestamp) as TotalePrezzoVeicolo,

CASE

WHEN S.CodiceSconto IS NOT NULL

AND N.DataRitiro < S.DataScadenza

THEN S.PercentualeSconto

ELSE 0

END as PercentualeSconto

From

(VEICOLO as V

Join NOLEGGIO as N

On V.Targa = N.Targa)

Left Join SCONTO as S

On N.CodiceSconto = S.CodiceSconto;

CREATE VIEW PrOp AS

SELECT N.IdNoleggio AS IdNoleggio,

SUM(CASE WHEN O.Prezzo IS NULL

THEN 0

ELSE O.Prezzo \* (

CASE

WHEN O.isGiornaliero

THEN DATE\_PART('day', N.DataRiconsegna::timestamp - N.DataRitiro::timestamp)

ELSE 1

END)

END) AS TotalePrezzoOptional

FROM (

OPTIONAL\_NOLEGGIO AS O\_N

JOIN OPTIONAL AS O

On O\_N.Titolo = O.Titolo)

RIGHT JOIN NOLEGGIO AS N

ON O\_N.IdNoleggio = N.IdNoleggio

GROUP BY N.IdNoleggio;





SELECT PrVe.IdNoleggio, CAST(PrVe.TotalePrezzoVeicolo AS DECIMAL(9,2)),

CAST(PrOp.TotalePrezzoOptional AS DECIMAL(9,2)) AS TotalePrezzoOptional, PrVe.PercentualeSconto,

CAST((PrVe.TotalePrezzoVeicolo + PrOp.TotalePrezzoOptional) \*(100-PrVe.PercentualeSconto)/100 AS

DECIMAL(9,2)) AS ImportoTotale

FROM PrVe

JOIN PrOp

ON PrVe.IdNoleggio = PrOP.IdNoleggio

WHERE PrVe.IdNoleggio = 15;

**Indici**

Dato il grande numero di ricerca dei veicoli disponibili tramite l’operazione 3, query n.5 fondamentale,

viene eseguita mediamente ~10.000 volte al giorno su varie entità tra cui Noleggio (volume di 50.000),

risulta necessario implementare un indice a favore dell’operazione.

Il rischio principale da tenere in considerazione è quello di rallentare la scrittura.

Considerando che la scrittura (~500 volte alla settimana per l’entità Noleggio) è relativamente minore

rispetto alla lettura (10.000 volte al giorno) sarà accettata una scrittura più lenta per migliorare

l’operatività della ricerca.

Si procede quindi a creare l’indice **idx\_Noleggio** per la tabella Noleggio:

DROP INDEX IF EXISTS idx\_Noleggio;

CREATE INDEX idx\_Noleggio ON Noleggio(DataRiconsegna, DataRitiro, Targa);

**6) Codice C++**

**Descrizione dell’utilizzo del codice**

Nel seguente manuale verrà illustrato come eseguire il codice C++ su sistema operativo Windows.

Per utilizzare il codice C++ è necessario aver installato :

\-

\-

PostgreSQL 14 (preferibilimente in C:\Program Files\)

compilatore c++ (MinGW per windows)

Includere nelle variabili d’ambiente PATH i seguenti :

\-

\-

..\mingw64\bin

..\PostgreSQL\14\bin

Da terminale compilare il file “noleggioVeicolo.cpp” con il seguente comando :

g++ -o .\noleggioVeicolo noleggioVeicolo.cpp -lpq -L"C:\Program Files\PostgreSQL\14\lib"

**Attenzione!!!**

In caso di installazioni personalizzate di PostgreSQL modificare :

\- nel file “noleggioVeicolo.cpp” :

\- #include "C:\Program Files\PostgreSQL\14\include\libpq-fe.h"

\- da sostituire con il percorso del proprio file “libpq-fe.h”

\- nel comando per compilare :

\- “C:\Program Files\PostgreSQL\14\lib”

\- da sostituire con il percorso della cartella lib di PostgreSQL 14

Una volta conclusa la compilazione, eseguire il file “noleggioVeicolo.exe”.

All’esecuzione del file apparirà un menù con la possibilità di eseguire le query inserendo il numero della

query desiderata, come nella seguente immagine :





Per le query 2 e 4 non sono richiesti input ulteriori, mentre per :

\-

\-

la query 1 sarà richiesta una data nel seguente formato AAAA-MM-GG (esempio: 2022-07-14)

la query 3 sarà richiesto un intero che rappresenta il numero di recensioni minime da prendere in

considerazione per ogni modello (esempio: 4)

\-

\-

la query 5 sarà richiesta la regione (esempio: Veneto), la città (esempio: Padova) e due date, la

data di ritiro (esempio: 2022-06-12) e la data di riconsegna (esempio: 2022-06-15)

la query 6 sarà richiesto l’id del Noleggio (esempio: 15)

Dopo ogni stampa delle tuple restituite viene messo in pausa il programma per 2 secondi per facilitare la

visualizzazione delle stampe, successivamente stampa nuovamente il menù pronto per l’interazione

successiva.

Per uscire dal programma digitare 0.

!!! Il codice non prende in considerazione input errati in quanto non effettua un controllo quindi è cautela

dell’utente inserire input un corretto nel formato richiesto.

**Documentazione del codice**

Descrizione e utilizzo delle funzioni presenti nel file “noleggioVeicolo.cpp”.

PGconn *\**connessioneDB(*const char \*dbname*, *const char \*user*, *const char \*password*, *const char \*hostaddr*,

*const char \*port*);

Se i parametri risultano corretti stampa “Connessione stabilita” e ritorna una connessione con il

database, mentre se fallisce stampa “Connessione fallita con errore: “+ errore e termina l’esecuzione del

programma.

*bool* controllaRes(*const* PGconn *\*conn*, PGresult *\*res*);

Controlla il risultato ritornato dall’esecuzione di una query.

Se il risultato presenta errori: stampa “Non è stato restituito un risultato valido”+Messaggio dell’errore e

ritorna 0; altrimenti ritorna 1.

*void* printRes(*const* PGconn *\*conn*, PGresult *\*r*);

Controlla il risultato utilizzando controllaRes(conn, r);

Se va a buon fine stampa l'intestazione e le tuple contenute in r.

*void* eseguiQuery(PGconn *\*conn*, *const char \*query*, *int nParams*, *const char \*const parametri*[]);

Esegue la query passata per i parametri in base al numero dei parametri (nParams) e ai parametri

richiesti per eseguire la query.

Stampa il risultato se corretto se l’esecuzione va a buon fine.

