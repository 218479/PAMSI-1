#include <iostream>
#include <time.h>
#include "Tablica_dynamiczna.hh"

using namespace std;

int main()
{
    double trwanie;
    time_t start, stop;
    tablica_dyn Tabliczka(10, 0);
    Tabliczka.zapisz();
    start=clock();
    while(Tabliczka.get_licznik()<1010)
    {
        if(Tabliczka.czy_miejsce()==true)
        {
            Tabliczka.dopisz();
        }
        else
        {
            Tabliczka.powieksz(100000);
        }

    }
    stop=clock();
    trwanie=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<endl;
    cout<<"TRWALO TO: "<<trwanie<<"sekund"<<endl;

    return 0;
}
