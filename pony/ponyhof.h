#ifndef PONYHOF_H
#define PONYHOF_H
#include <iostream>
#include <vector>
#include "stall.h"
using namespace std;

class PonyHof:public Stall
{
public:
    PonyHof();
    void userDialog();
    void PonyAnlegen();
    void ponyHolen();

private:
    Stall stallung;
    vector<Pony*>beimReiten;
    int weide;

};

#endif // PONYHOF_H
