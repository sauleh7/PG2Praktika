#include "pony.h"

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

bool Pony::istReitbar(int x)
{

}

void Pony::zeigeInfo(){
    cout<<"Name von Pony "<<name<<endl;
    cout<<"GeburtJahr von Pony "<<geburtsJahr<<endl;
}

void Pony::hihi()
{

}



