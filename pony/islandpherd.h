#ifndef ISLANDPHERD_H
#define ISLANDPHERD_H
#include <iostream>
#include <vector>
#include "pony.h"
using namespace std;

class Islandpherd : public Pony
{
public:
    Islandpherd(int geburtJahr, string name, bool ekzemer);
    Islandpherd(const Islandpherd & island);
    bool hatEkzem();
    bool istReitbar();
    virtual void zeigeInfo() override;
private:
    bool ekzemer;

};

#endif // ISLANDPHERD_H
