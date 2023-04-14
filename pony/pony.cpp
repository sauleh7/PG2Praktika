#include "pony.h"
#include "islandpherd.h"
#include "shetlandpony.h"

Pony::Pony():ort(0,0)
{

}

Pony::Pony(int geburtsJahr, string name): geburtsJahr(geburtsJahr), name(name), ort(0,0){


}

string Pony::gibName()
{
    return name;
}

int Pony::GibGeburtsjahr()
{
return geburtsJahr;
}

void Pony::setzePos(const Position &p)
{

}

bool Pony::istReitbar(int alt){
    Islandpherd *Is;
    Shetlandpony *mo;

    if((Is=dynamic_cast<Islandpherd*>(this))){
        if(Is->istReitbar(alt)){
            return true;}
        else
            return false;
    }else if((mo=dynamic_cast<Shetlandpony*>(this))){
        if(mo->istReitbar(alt)){
            return true;}
        else
            return false;}
    return true;}

void Pony::zeigeInfo(){
    cout<<"Name von Pony "<<name<<endl;
    cout<<"GeburtJahr von Pony "<<geburtsJahr<<endl;
}

void Pony::hihi()
{

}



