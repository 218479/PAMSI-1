#include <iostream>
#include <time.h>
#include "Tablica_dynamiczna.hh"
#include "stoper.hh"

using namespace std;

int main()
{
    stoper Liczydlo;
    int wybor=99;
    int ile_liczb,o_ile;
    cout<<"Ile liczba ma zostac dopisanych do tablicy?"<<endl;
    cin>>ile_liczb;
    cout<<"\n\nWybierz algorytm:\n1.Powiekszanie o 1\n2.Powiekszanie o 100"<<endl;
    cout<<"3.Powiekszenie o zadana wczesniej liczb"<<endl;
    cout<<"0.Wyjscie z programu\n"<<endl;


    while(wybor!=0)
    {
        cin>>wybor;
        switch(wybor)
        {
        case 1:
            o_ile=1;
            break;
        case 2:
            o_ile=100;
            break;
        case 3:
            o_ile=ile_liczb;
            break;
        case 0:
            return 0;
            break;
        default:
            cout<<"Wybierz ponownie"<<endl;
            break;
        }
        tablica_dyn Tabliczka(10, 0);
        Tabliczka.zapisz();
        Liczydlo.Wlacz();
        while(Tabliczka.get_licznik()<ile_liczb)
        {
            if(Tabliczka.czy_miejsce()==true)
            {
                Tabliczka.dopisz();
            }
            else
            {
                Tabliczka.powieksz(o_ile);
            }
        }
        Liczydlo.Wylacz();
        Liczydlo.Czas_trwania();
        Liczydlo.Wyzeruj_stoper();
    }
    return 0;
}
