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
    cout<<"Czas trwania:"<<trwanie<<endl;
}

void stoper::Wyzeruj_stoper()
{
    start=0;
    stop=0;
    trwanie=0;
}
void stoper::Przeslij_do_pliku(int ile)
{
    fstream plik;
    plik.open("Wyniki.txt", ios::in|ios::app);
    if(plik.good())
    {
        plik<<"Dopisanie "<<ile<<"Wierszy zajelo"<<trwanie<<"sekund"<<endl;
    }
    else
    {
        cout<<"NIE UDALO SIE UTWORZYC PLIKU!"<<endl;
    }
}
