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
    //die Rasse
    string choice;
    char h;
    while (true) {

        cout << "Welche Ponyrasse wollen sie einstellen?" << endl;
        cout << "S fuer Shetlandpony oder I fuer Islandpherd: ";
         cin >> choice;
       if(choice == "I"||choice == "i"||choice == "S"||choice == "s"){
           break;
       }else{
           cout<<"Weder s noch i wurde eingegben bitte noch mal versuchen"<<endl;
       }

    }


        cout << "Wie soll das Pony heissen? ";
        cin >> name;

        cout << "In welchem Jahr wurde das Pony geboren? ";
        cin >> geburtsJahr;

        if (choice == "I"||choice == "i") {
            while (true) {
                cout << "Braucht das Pony Ekzemer (y/n)? ";
                 cin >> h;
                if (h == 'y'||h == 'Y') {
                    ekzemer = true;
                    break;
                }else if(h == 'n'||h == 'N'){
                    ekzemer = false;
                    break;
                }else{
                    cout<<"Hey J/N eingeben"<<endl;
                }
            }
            Pony* is = new Islandpherd(geburtsJahr, name, ekzemer);

            if( einstellen(is)){
                  cout<<"Pony wurde eingefuegt"<<endl;
            }else{
                  cout<<"Volllllll"<<endl;
            }
        }

        else if (choice == "S"||choice == "s") {

            while (true) {
                cout << "Ist das Pony kinderlieb (y/n)? ";
                 cin >> h;
                if (h == 'y'||h == 'Y') {
                    kinderlieb = true;
                    break;
                }else if(h == 'n'||h == 'N'){
                    kinderlieb = false;
                    break;
                }else{
                    cout<<"Hey J/N eingeben"<<endl;
                }
            }

            Pony* sh = new Shetlandpony(geburtsJahr, name, kinderlieb);
            if( einstellen(sh)){
                  cout<<"Pony wurde eingefuegt"<<endl;
            }else{
                  cout<<"Volllllll"<<endl;
            }

        }


}


















