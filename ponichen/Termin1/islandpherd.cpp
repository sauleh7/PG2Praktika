#include "islandpherd.h"

Islandpherd::Islandpherd()
{
}

Islandpherd::~Islandpherd()
{

};

Islandpherd::Islandpherd(int geburtJahr, string name, bool ekzemer): Pony(geburtJahr, name),ekzemer(ekzemer){

}

bool Islandpherd::hatEkzem()
{
    return ekzemer;

}

bool Islandpherd::istReitbar(int alt)
{
    if(alt<=10){
        return true;
    }else{
        cout<<"Islandpferd Alt muss unter 10 sein"<<endl;
        return false;}

}
void Islandpherd::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Brauch des Pony Ekzemer"<<ekzemer;
}
