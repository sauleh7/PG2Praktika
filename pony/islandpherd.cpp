#include "islandpherd.h"

Islandpherd::Islandpherd()
{
}

Islandpherd::Islandpherd(int geburtJahr, string name, bool ekzemer): Pony(geburtJahr, name),ekzemer(ekzemer){

}

bool Islandpherd::hatEkzem()
{
    return ekzemer;

}

bool Islandpherd::istReitbar(int alt)
{
    if(alt >= 10){
        cout<<"Pony ist Reitbar"<<endl;
        return true;
    }
    else{
        cout<<"Pony ist nicht Reitbar"<<endl;
    }

    return false;
}
void Islandpherd::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Brauch des Pony Ekzemer"<<ekzemer;
}
