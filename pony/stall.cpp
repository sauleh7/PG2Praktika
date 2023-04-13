#include "stall.h"
#include "islandpherd.h"
#include "shetlandpony.h"

Stall::Stall()
{
    for (int i = 0; i < SIZE; ++i) {
        pferdeboxen[i]=nullptr;

    }
}

int Stall::belegtBoxen()
{

}

bool Stall::einstellen(Pony *p){
    for (int i = 0; i < SIZE ; ++i) {
        if(pferdeboxen[i] == nullptr){
            pferdeboxen[i]=p;
            return true;
        }

    }


    return false;

}

Pony *Stall::herausholen(string name)
{
Pony* p;
    for (int i = 0; i < SIZE; ++i) {
        if(pferdeboxen[i] != nullptr){
            if( pferdeboxen[i]->gibName()==name){
                p = pferdeboxen[i];
                pferdeboxen[i]==nullptr;
                return p ;
            }

        }

    }

    return nullptr;

}

float Stall::durchschnittsalter()
{

}

void Stall::wiedergang(int x)
{

}

void Stall::zeiginfo()
{
    Islandpherd* isj;
    Shetlandpony* mo;
    string gap="  ";
    for (int i = 0; i < SIZE; ++i) {
        if(isj = dynamic_cast<Islandpherd*>(pferdeboxen[i])){
            cout<<"Islandpherd"<<gap;
            cout<<pferdeboxen[i]->gibName()<<gap;
            cout<<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout<<"hatEzem? "<<(isj->hatEkzem()?"y":"n")<<gap<<endl;
        }
        else if(mo = dynamic_cast<Shetlandpony*>(pferdeboxen[i])){
            cout<<"Shetlandpony"<<gap;
            cout<<pferdeboxen[i]->gibName()<<gap;
            cout<<pferdeboxen[i]->GibGeburtsjahr()<<gap;
            cout<<"KinderLieb? "<<(mo->istKinderlieb()?"y":"n")<<gap<<endl;
        }

    }


}























