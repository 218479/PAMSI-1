#include "stoper.hh"

using namespace std;

void stoper::Wlacz()
{
    start=clock();
}

void stoper::Wylacz()
{
    stop=clock();
}

void stoper::Czas_trwania()
{
    trwanie=(double)(stop-start)/CLOCKS_PER_SEC;
}

double stoper::Zliczaj_do_sumy()
{
    suma=suma+trwanie;
    return suma;
}
void stoper::przygotuj()
{
    start=0;
    stop=0;
    trwanie=0;
}
