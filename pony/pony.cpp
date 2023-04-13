#include "pony.h"

Pony::Pony():ort(0,0)
{

}

Pony::Pony(int geburtsJahr, string name): geburtsJahr(geburtsJahr), name(name), ort(0,0){
    cout << "Wie soll das Pony heissen? ";
    cin >> name;

    cout << "In welchem Jahr wurde das Pony geboren? ";
    cin >> geburtsJahr;

}

string Pony::gibName()
{

}

int Pony::GibGeburtsjahr()
{

}

void Pony::setzePos(const Position &)
{

}

bool Pony::istReitbar(int)
{

}

void Pony::zeigeInfo(){
    cout<<"Name von Pony "<<name<<endl;
    cout<<"GeburtJahr von Pony "<<geburtsJahr<<endl;
}



