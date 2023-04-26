#ifndef STALL_H
#define STALL_H
#include <iostream>
#include <vector>
#include "pony.h"
#include <iomanip>
#include <ctime>
 #include <fstream>
#define SIZE 20
#include <stdlib.h>
using namespace std;

class Stall:public Pony
{
public:
    Stall();
//    ~Stall();
    int belegtBoxen();
    bool einstellen(Pony* p);
    Pony* herausholen(string name);
    double durchschnittsalter();
    void weidegang(vector<Pony *> *weide);
    void zeiginfo();
    int berechneJahr();

private:
    Pony* pferdeboxen[SIZE];
};

#endif // STALL_H
