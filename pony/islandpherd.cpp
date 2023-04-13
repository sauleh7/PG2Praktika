#include "islandpherd.h"

Islandpherd::Islandpherd(int geburtJahr, string name, bool ekzemer): Pony(geburtJahr, name),ekzemer(ekzemer)
{

}

bool Islandpherd::hatEkzem()
{
    return ekzemer;

}

bool Islandpherd::istReitbar()
{
    return ekzemer;
}
void Islandpherd::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Brauch des Pony Ekzemer"<<ekzemer;
}
