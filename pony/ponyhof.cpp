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

            break;
        case 3:

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
    while (true) {
        cout << "Welche Ponyrasse wollen sie einstellen?" << endl;
        cout << "S fuer Shetlandpony oder I fuer Islandpherd: ";

        string choice;  cin >> choice;

        if (choice == "I"||choice == "i") {
            cout << "Braucht das Pony Ekzemer (y/n)? ";
            char h; cin >> h;
            if (h == 'y'||h == 'Y') {
                ekzemer = true;
            }

            Pony* is = new Islandpherd(geburtsJahr, name, ekzemer);
            //pferdeboxen.push_back(is);
            break;
        }

        else if (choice == "S"||choice == "s") {
            cout << "Ist das Pony kinderlieb (y/n)? ";
            char h; cin >> h;
            if (h == 'y') {
                kinderlieb = true;}
            Pony* sh = new Shetlandpony(geburtsJahr, name, kinderlieb);
            //pferdeboxen.push_back(sh);
            break;
        }
        else {
            cout << "Ungültig" << endl;
        }
    }
    cout<<"Sie haben erfolgreich eingestellt"<<endl;

}
















