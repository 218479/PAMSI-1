#include <iostream>
#include "Stos.hh"
#include "Kolejka.hh"
#include "Test_lista.hh"
#include "stoper.hh"

using namespace std;

int main()
{

    Test_lista Test;
    int tab[]={10,100,1000,10000,100000,1000000,1000000000};
    for(int i=0;i<7;i++)
    {
    Test.przygotuj(tab[i]);
    Test.wykonaj(tab[i]);
    }

    return 0;
}
