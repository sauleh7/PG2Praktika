#ifndef STALL_H
#define STALL_H
#include <iostream>
#include <vector>
#include "pony.h"
#define SIZE 20
using namespace std;

class Stall:public Pony
{
public:
    Stall();
    int belegtBoxen();
    bool einstellen(Pony* p);
    Pony* herausholen(string name);
    float durchschnittsalter();
    void wiedergang(int x);
    void zeiginfo();
private:
    Pony* pferdeboxen[SIZE];
};

#endif // STALL_H
