#include "timer.h"
#include<iostream>
#include<time.h>

using namespace std;

void timer::start_clock()
{
    start_time=clock();
}

void timer::stop_clock()
{
    stop_time=clock();
}

void timer::get_time()
{
    czas=(double)(stop_time-start_time)/CLOCKS_PER_SEC;
  //  cout<<czas<<endl;
}
void timer::dodaj_sume()
{
    suma=suma+czas;
}
double timer::get_suma()
{
    return suma;
}
void timer::przygotuj()
{
    start_time=0;
    stop_time=0;
    czas=0;
    suma=0;
}

