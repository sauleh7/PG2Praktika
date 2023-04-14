#ifndef SHETLANDPONY_H
#define SHETLANDPONY_H
#include <iostream>
#include <vector>
#include "pony.h"
using namespace std;

class Shetlandpony : public Pony
{
public:
    Shetlandpony();
    Shetlandpony(int geburtJahr, string name, bool kinderlieb);
    void zeigeInfo() ;
    bool istReitbar(int alt);
    bool istKinderlieb();
private:
    bool kinderlieb;
};

#endif // SHETLANDPONY_H
