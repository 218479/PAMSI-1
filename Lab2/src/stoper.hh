#ifndef stoper_hh
#define stoper_hh

#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

class stoper
{
private:
    time_t start, stop;
    double trwanie;

public:
    stoper()
    {
        start=0;
        stop=0;
        trwanie=0;
    };
    void Wlacz();
    void Wylacz();
    void Czas_trwania();
    void Wyzeruj_stoper();
    void Przeslij_do_pliku(int ile);
};

#endif
