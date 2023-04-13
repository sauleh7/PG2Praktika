#ifndef ISLANDPHERD_H
#define ISLANDPHERD_H
#include <iostream>
#include <vector>
#include "pony.h"
using namespace std;

class Islandpherd : public Pony
{
public:
    Islandpherd();
    Islandpherd(int geburtJahr, string name, bool ekzemer);
    bool hatEkzem();
    bool istReitbar();
    void zeigeInfo() ;
private:
    bool ekzemer;
};

#endif // ISLANDPHERD_H
