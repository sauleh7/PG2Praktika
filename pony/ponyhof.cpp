#include "ponyhof.h"
#include "islandpherd.h"
#include "shetlandpony.h"

PonyHof::PonyHof()
{

}
void PonyHof::userDialog(){
    int choice;
    while(true){
        cout<<"   1 Pony einstellen"<<endl;
        cout<<"   2 Pony zum Reiten holen"<<endl;
        cout<<"   3 Ponys kontrollieren"<<endl;
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
            zeiginfo();
            break;
        case 0:
            exit(0);

            break;
        default:
            break;
        }
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
        if (einstellen(pony)) {
            cout << "Pony wurde eingestellt." << endl;
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
        if (einstellen(pony)) {
            cout << "Pony wurde eingestellt." << endl;
        } else {
            cout << "Keine Boxen mehr frei." << endl;
        }
    }
}

void PonyHof::ponyHolen(){
    cout<<"Name des zu holenden Ponys: "; string na; cin>>na;
    cout<<"Alter des Reiters: "; int reiteralt; cin>>reiteralt;
    Pony* p = herausholen(na);
    if (p == nullptr) {
           cout << "Pony nicht gefunden" << endl;
           return;
       }
    if( !p->istReitbar(reiteralt) ){
        einstellen(p);
        cout<<"Pony ist nicht Reitbar"<<endl;
        return;

    }


}


















