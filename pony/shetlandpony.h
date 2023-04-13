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
    virtual void zeigeInfo() override;
    bool istReitbar(int);
    bool istKinderlieb();
private:
    bool kinderlieb;
};

#endif // SHETLANDPONY_H
