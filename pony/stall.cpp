#include "stall.h"
#include "islandpherd.h"
#include "shetlandpony.h"

Stall::Stall()
{
    for (int i = 0; i < SIZE; ++i) {
        pferdeboxen[i]=nullptr;

    }
}

int Stall::belegtBoxen(){
    int belegt = 0;
    for (int i = 0; i < SIZE; i++) {
        if (pferdeboxen[i] != nullptr) {
            belegt++;
        }
    }
    return belegt;

}

bool Stall::einstellen(Pony *p){
    for (int i = 0; i < SIZE ; ++i) {
        if(pferdeboxen[i] == nullptr){
            pferdeboxen[i]=p;
            return true;
        }
    }
    return false;
}

Pony *Stall::herausholen(string name){
Pony* p;
    for (int i = 0; i < SIZE; ++i) {
        if(pferdeboxen[i] != nullptr){
            if( pferdeboxen[i]->gibName()==name){
                p = pferdeboxen[i];

                cout<<"Alter des Reiters: "; int reiteralt; cin>>reiteralt;
                if(p->istReitbar(reiteralt)){
                    pferdeboxen[i] == nullptr;
                    return p ;
                }
                else{
                    cout<<"Pony ist nicht Reitbar"<<endl;
                    return nullptr;
                }

            }

        }

    }
    cout<<"Kein Pony gefunden"<<endl;
    return nullptr;
}

float Stall::durchschnittsalter()
{
    int summe = 0;
    int anzahl = SIZE;
    for (int i = 0; i < anzahl; ++i) {
        summe += pferdeboxen[i]->GibGeburtsjahr();
    }
    return (double)summe/anzahl;
}


int Stall::berechneJahr()
{
    // aktuelle Zeit erhalten
    time_t seconds = time(NULL);
    int elapsedYears = seconds / (365.25 * 24 * 60 * 60);
    return 1970 + elapsedYears;
}


void Stall::zeiginfo(){
    Islandpherd* isj;
    Shetlandpony* mo;
    string gap="  ";
    const char separator    = ' ';
    const int nameWidth     = 10;

    cout<<"                Islandpherd hat 'Ekzem'       Shetlandpony ist 'Kinderlieb'      "<<endl; cout<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout << left << setw(nameWidth) << setfill(separator) <<"  Rasse"<<gap;
    cout << left << setw(nameWidth) << setfill(separator) <<"  Name"<<gap;
    cout << left << setw(nameWidth) << setfill(separator) <<"  GeburtJahr"<<gap;
    cout << left << setw(nameWidth) << setfill(separator) <<"  Spezial"<<gap;
    cout<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    // Open the file for reading
      ifstream myfile("C:\\Users\\skhisagu\\OneDrive - Capgemini\\Desktop\\Hochschule\\PG2Praktika\\pony.txt");
      if (myfile.is_open()) {
          string line;
          while (getline(myfile, line)) {
              cout << line << endl;
          }
          myfile.close();
      }
      else {
          cout << "Unable to open file" << endl;
      }
      // Open the file for writing
      ofstream myoutfile("C:\\Users\\skhisagu\\OneDrive - Capgemini\\Desktop\\Hochschule\\PG2Praktika\\pony.txt", ios::app);

    for (int i = 0; i < SIZE; ++i) {

        if(isj = dynamic_cast<Islandpherd*>(pferdeboxen[i])){
            cout << left << setw(nameWidth) << setfill(separator) <<"Islandpherd"<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->gibName()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<(isj->hatEkzem()?"y":"n")<<gap<<endl;
            myoutfile<< "Islandpherd" << " " << pferdeboxen[i]->gibName() << "           "
                     << pferdeboxen[i]->GibGeburtsjahr() << "   " << (isj->hatEkzem()?"y":" n") << endl;
            cout<<endl;

        }
        else if(mo = dynamic_cast<Shetlandpony*>(pferdeboxen[i])){
            cout << left << setw(nameWidth) << setfill(separator) <<"Shetlandpony"<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->gibName()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<(mo->istKinderlieb()?"y":"n")<<gap<<endl;
            myoutfile << "Shetlandpony" << "   " << pferdeboxen[i]->gibName() << "     "
                      << pferdeboxen[i]->GibGeburtsjahr() << "   "<<(mo->istKinderlieb()?" y":"n")<<endl;
            cout<<endl;

        }
    }
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Current time: "<<berechneJahr()<<endl;
    cout<<"Durchschnittalt alle Ponys sind"<<durchschnittsalter()<<endl; cout<<endl;
    cout<<"Derzeit "<<belegtBoxen()<<" Ponys geritten werden"<<endl;

    cout<<"-------------------------------------------------------------------"<<endl;


}

void Stall::wiedergang(int x)
{

}
























