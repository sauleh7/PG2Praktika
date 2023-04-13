#include "shetlandpony.h"

Shetlandpony::Shetlandpony(int geburtJahr, string name, bool kinderlieb): Pony(geburtJahr, name), kinderlieb(kinderlieb)
{

}

void Shetlandpony::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Die POny ist kinderlieb "<<kinderlieb;
}
