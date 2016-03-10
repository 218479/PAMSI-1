#include <iostream>
#include <time.h>
#include "Tablica_dynamiczna.hh"

using namespace std;

int main()
{
    int wybor=99;
    int ile_liczb,o_ile;
    int alg1=1, alg2=100;
    double trwanie;
    time_t start, stop;
    cout<<"Ile dodatkowych liczba ma zostac dopisanych do tablicy?"<<endl;
    cin>>ile_liczb;
    while(wybor!=0)
    {
    cout<<"\n\nWybierz algorytm:\n1.Powiekszanie o 1\n2.Powiekszanie o 100\n3.Powiekszenie o zadana wczesniej liczb\n0.Wyjscie z programu\n";
        cin>>wybor;
        switch(wybor)
        {
        case 1:
            o_ile=alg1;
            break;
        case 2:
            o_ile=alg2;
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
        start=clock();
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
        stop=clock();
        trwanie=(double)(stop-start)/CLOCKS_PER_SEC;
        cout<<endl;
        cout<<"TRWALO TO: "<<trwanie<<"sekund"<<endl;
    }
    return 0;
}
