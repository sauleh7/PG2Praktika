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
    ~PonyHof();
    void userDialog();
    void PonyAnlegen();
    void ponyHolen();
    void feierabend();
    void einlesen();


private:
    Stall stallung;
    vector<Pony*>beimReiten;
    vector<Pony*>weide;

};

#endif // PONYHOF_H
