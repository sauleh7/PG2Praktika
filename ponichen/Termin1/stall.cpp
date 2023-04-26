#include "stall.h"
#include "islandpherd.h"
#include "ponyhof.h"
#include "shetlandpony.h"

Stall::Stall()
{
    for (int i = 0; i < SIZE; ++i) {
        pferdeboxen[i]=nullptr;
    }
}

//Stall::~Stall() {

//    for (int i = 0; i < SIZE; ++i) {
//        delete pferdeboxen[i];
//    }
//}

int Stall::belegtBoxen(){
    int belegt = 0;
    for (int i = 0; i < SIZE; i++) {
        if (pferdeboxen[i] != nullptr) {
            belegt++;
        }
    }
    return belegt;

}


void Stall::weidegang(vector<Pony*>* weide) {
    // Weide-Eigenschaften
    double breite = 30;
    double laenge = 40;
    double xw = 0; // Linke obere Ecke der Weide
    double yw = 0;

    int counter=0;
    // Zufällige Positionen für jedes Pony auf der Weide setzen

    for (int i = 0; i < SIZE; i++) {
        // Zufällige Koordinaten generieren

        // Pony auf neue Position setzen
        if (pferdeboxen[i] != nullptr) {
            counter++;
            double zx = (double) rand() / RAND_MAX; // Zwischen 0 und 1
            double zy = (double) rand() / RAND_MAX;
            double zx_stretch = zx * breite; // Auf Weidenbreite skalieren
            double zy_stretch = zy * laenge; // Auf Weidenlänge skalieren
            double x = xw + zx_stretch; // Auf x-Koordinate der Weide verschieben
            double y = yw + zy_stretch; // Auf y-Koordinate der Weide verschieben
            Position newPos{(int)x,(int)y};
            pferdeboxen[i]->setzePos(newPos);

        }
    }
   cout << "Anzahl der Ponys auf der Weide: " << counter << endl;

}



bool Stall::einstellen(Pony *p){
    for (int i = 0; i < SIZE ; i++) {
        if(pferdeboxen[i] == nullptr){
            pferdeboxen[i]=p;
            cout << "Pony " << p->gibName() << " wurde eingestellt\n";
            return true;
        }
    }
    cout << "Keine freien Boxen verfügbar\n";
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
                    pferdeboxen[i] = nullptr;
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

double Stall::durchschnittsalter()
{
    double summe = 0 ;

    for (int i = 0; i < SIZE ; ++i) {

        if(pferdeboxen[i]!=nullptr){
            summe += (berechneJahr() - pferdeboxen[i]->GibGeburtsjahr());
        }
    }
    return summe/SIZE;
}


int Stall::berechneJahr()
{
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


    for (int i = 0; i < SIZE; ++i) {

        if((isj = dynamic_cast<Islandpherd*>(pferdeboxen[i]))){
            cout << left << setw(nameWidth) << setfill(separator) <<"Islandpherd"<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->gibName()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<(isj->hatEkzem()?"y":"n")<<gap<<endl;


        }
        else if((mo = dynamic_cast<Shetlandpony*>(pferdeboxen[i]))){
            cout << left << setw(nameWidth) << setfill(separator) <<"Shetlandpony"<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->gibName()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout << left << setw(nameWidth) << setfill(separator) <<(mo->istKinderlieb()?"y":"n")<<gap<<endl;

        }
    }
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Current time: "<<berechneJahr()<<endl;
    cout<<"Durchschnittalt alle Ponys ist "<<durchschnittsalter()<<endl;
    cout<<"Derzeit "<<belegtBoxen()<<" Ponys geritten werden"<<endl;

    cout<<"-------------------------------------------------------------------"<<endl;


}
























