#include "ponyhof.h"
#include "islandpherd.h"
#include "shetlandpony.h"

PonyHof::PonyHof()
{

    einlesen();
}

PonyHof::~PonyHof()
{
    //in zeigeinfo geschrieben
}
void PonyHof::userDialog(){
    int choice;
    while(true){
        cout<<"   1 Pony einstellen"<<endl;
        cout<<"   2 Pony zum Reiten holen"<<endl;
        cout<<"   3 Ponys kontrollieren"<<endl;
        cout<<"   4 Ponys auf Weide schicken"<<endl;
        cout<<"   0 Programm beenden"<<endl;
        cout<<"Auswahl: "; cin>>choice;
        switch (choice) {
        case 1:
            PonyAnlegen();
            break;
        case 2:
            ponyHolen();
            break;
        case 3:
            stallung.zeiginfo();
            break;
        case 4:
            stallung.weidegang(&weide);
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }

}
void PonyHof::feierabend() {
    for (size_t i = 0; i < beimReiten.size() ; i++) {
        if (beimReiten[i] != nullptr) {
            stallung.einstellen(beimReiten[i]);
            beimReiten[i] = nullptr;
       }
    }
    cout << "Alle Ponys sind zurück in ihren Boxen." << endl;
}

void PonyHof::einlesen(){
    Pony* pony;
    ifstream myfile("C:\\Users\\skhisagu\\OneDrive - Capgemini\\Desktop\\Hochschule\\PG2Praktika\\pony.txt");
    if (myfile.is_open()) {
           string line;
           while (getline(myfile, line)) {
               stringstream ss(line);
               string rasse,name; int geburtsjahr; string spezial;

               ss >> rasse >> name >> geburtsjahr >> spezial;



               if (rasse == "Islandpferd") {
                   bool hatEkzem = (spezial == "y");
                   pony = new Islandpherd(geburtsjahr, name, hatEkzem);
                   stallung.einstellen(pony);
               }
               else if (rasse == "Shetlandpony") {
                   bool istKinderlieb = (spezial == "y");
                   pony = new Shetlandpony( geburtsjahr,name, istKinderlieb);
                   stallung.einstellen(pony);
               }
           }
           myfile.close();
    }

}



void PonyHof::PonyAnlegen() {
    string name;
    int geburtsJahr = 0;
    bool ekzemer = false;
    bool kinderlieb = false;
    string rasse;
    while (true) {
        cout << "Welche Ponyrasse wollen Sie einstellen? (S fuer Shetlandpony, I fuer Islandpferd): ";
        cin >> rasse;
        if (rasse == "S" || rasse == "s" || rasse == "I" || rasse == "i") {
            break;
        } else {
            cout << "Ungueltige Eingabe. Bitte versuchen Sie es erneut." << endl;
        }
    }
    cout << "Wie soll das Pony heissen? ";
    cin >> name;
    cout << "In welchem Jahr wurde das Pony geboren? ";
    cin >> geburtsJahr;

    if (rasse == "S" || rasse == "s") {
        while (true) {
            cout << "Ist das Pony kinderlieb? (J/N) ";
            char antwort;
            cin >> antwort;
            if (antwort == 'J' || antwort == 'j') {
                kinderlieb = true;
                break;
            } else if (antwort == 'N' || antwort == 'n') {
                kinderlieb = false;
                break;
            } else {
                cout << "Ungueltige Eingabe. Bitte geben Sie J oder N ein." << endl;
            }
        }
        Pony* pony = new Shetlandpony(geburtsJahr, name, kinderlieb);
        if ( stallung.einstellen(pony)) {
            cout << "" << endl;
        } else {
            cout << "Keine Boxen mehr frei." << endl;
        }
    } else if (rasse == "I" || rasse == "i") {
        while (true) {
            cout << "Braucht das Pony Ekzemer? (J/N) ";
            char antwort;
            cin >> antwort;
            if (antwort == 'J' || antwort == 'j') {
                ekzemer = true;
                break;
            } else if (antwort == 'N' || antwort == 'n') {
                ekzemer = false;
                break;
            } else {
                cout << "Ungueltige Eingabe. Bitte geben Sie J oder N ein." << endl;
            }
        }
        Pony* pony = new Islandpherd(geburtsJahr, name, ekzemer);
        if ( stallung.einstellen(pony)) {
            cout << "" << endl;
        } else {
            cout << "Keine Boxen mehr frei." << endl;
        }
    }
}

void PonyHof::ponyHolen(){
    cout<<"Name des zu holenden Ponys: "; string na; cin>>na;
    Pony* p =  stallung.herausholen(na);
    if(p !=nullptr){
        cout<<na<<" wurde aus der Box geholt."<<endl;

    }else{
        cout<<"Kein Pony gefunden"<<endl;
    }
}




















