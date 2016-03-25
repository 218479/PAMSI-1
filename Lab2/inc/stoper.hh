#ifndef STOPER_HH
#define STOPER_HH

#include <iostream>
#include <time.h>
#include <fstream>
#include "Interfejs.hh"

using namespace std;

class stoper: public Interfejs_klasa
{
private:
    time_t start, stop;
    double trwanie, suma;



public:
    stoper()
    {
        start=0;
        stop=0;
        trwanie=0;
        suma=0;

    };
    double get_trwanie()
    {
        return trwanie;
    }
    void Wlacz();
    void Wylacz();
    void Czas_trwania();
    double Zliczaj_do_sumy();
    virtual void przygotuj();
    virtual void wykonaj()
    {
    }
};

#endif
