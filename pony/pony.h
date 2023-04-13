#ifndef PONY_H
#define PONY_H
#include <iostream>
#include <vector>
#include "position.h"
using namespace std;


class Pony
{
public:
    Pony();
    Pony(int geburtsJahr, string name);
    string gibName();
    int GibGeburtsjahr();
    void setzePos(const Position&);
    bool istReitbar(int);
    void zeigeInfo();


protected:
    int geburtsJahr;
    string name;
    Position ort;
};

#endif // PONY_H
