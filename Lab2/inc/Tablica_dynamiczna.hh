#ifndef Tablica_dynamiczna_hh
#define Tablica_dynamiczna_hh
#include "Interfejs.hh"
#include <iostream>

using namespace std;

class tablica_dyn:public Interfejs
{
private:
    int rozmiar;
    int licznik;
    int *tablica;
public:
    tablica_dyn(int x=10, int y=0)
    {
        rozmiar=x;
        licznik=y;
        tablica=new int [rozmiar];
    }
    void zapisz();
    int get_licznik();
    int get_rozmiar();
    void wypisz();
    void powieksz(int o_ile);
    void dopisz();
    bool czy_miejsce();
    void suma();

};

#endif
