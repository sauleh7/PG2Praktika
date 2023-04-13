#include "islandpherd.h"

Islandpherd::Islandpherd(int geburtJahr, string name, bool ekzemer): Pony(geburtJahr, name),ekzemer(ekzemer)
{

}
void Islandpherd::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Brauch des Pony Ekzemer"<<ekzemer;
}
