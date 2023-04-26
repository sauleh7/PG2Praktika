#ifndef PONY_H
#define PONY_H
#include <iostream>
#include <vector>


using namespace std;
struct Position {
    int x ;
    int y ;

    // Konstruktor
    Position(int x = 0, int y= 0): x(x), y(y){}
};

class Pony
{
public:
    Pony();
    ~Pony();
    Pony(int geburtsJahr, string name, const Position& position = Position(0, 0));
    string gibName();
    int GibGeburtsjahr();
    void setzePos(const Position& p);
    bool istReitbar(int alt);
    void zeigeInfo();
    virtual void hihi();


protected:
    int geburtsJahr;
    string name;
    Position ort;
};

#endif // PONY_H
