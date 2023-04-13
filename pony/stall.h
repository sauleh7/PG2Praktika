#ifndef STALL_H
#define STALL_H
#include <iostream>
#include <vector>
#include "pony.h"
#define SIZE 20
using namespace std;

class Stall
{
public:
    Stall();
    int belegtBoxen();
    bool einstellen(Pony* p);
    string herausholen(Pony* p);
    float durchschnittsalter();
    void wiedergang(int x);
    void zeiginfo();
private:
    Pony* pferdeboxen[SIZE];
};

#endif // STALL_H
