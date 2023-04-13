#ifndef STALL_H
#define STALL_H
#include <iostream>
#include <vector>
#include "pony.h"
using namespace std;

class Stall
{
public:
    Stall();
    int belegtBoxen();
    bool einstellen(Pony*);
    string herausholen(Pony*);
    float durchschnittsalter();
    void wiedergang(int);
    void zeiginfo();
private:
    vector<Pony*>pferdeboxen;
};

#endif // STALL_H
