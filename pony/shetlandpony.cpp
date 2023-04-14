#include "shetlandpony.h"

Shetlandpony::Shetlandpony()
{

}

Shetlandpony::Shetlandpony(int geburtJahr, string name, bool kinderlieb): Pony(geburtJahr, name), kinderlieb(kinderlieb)
{

}

void Shetlandpony::zeigeInfo(){
    Pony::zeigeInfo();
    cout<<"Die POny ist kinderlieb "<<kinderlieb;
}

bool Shetlandpony::istReitbar(int alt){
    if( alt >= 5 && alt <= 12){
        if(alt <= 8 && !istKinderlieb()){
            cout<<"Pony ist nicht Reitbar, Reiter soll mindestens 8 Jahr alt sein"<<endl;
            return false;
        }
        else
            return true;
    }
    else{
        cout<<"Reiteralt muss zwischen  5 und 12 sein"<<endl;
        return false;}
}

bool Shetlandpony::istKinderlieb()
{
    return kinderlieb;


}
