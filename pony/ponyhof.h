#ifndef PONYHOF_H
#define PONYHOF_H
#include <iostream>
#include <vector>
#include "stall.h"
using namespace std;

class PonyHof
{
public:
    PonyHof();
    void userDialog();
    void PonyAnlegen();

private:
    Stall stallung;
    vector<Pony*>beimReiten;
    int weide;

};

#endif // PONYHOF_H
