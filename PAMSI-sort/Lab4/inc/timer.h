#ifndef TIMER_H
#define TIMER_H
#include<iostream>
#include <time.h>

class timer
{
    time_t start_time;
    time_t stop_time;
    double czas;
    double suma;
    public:
        void start_clock(); //startuje timer
        void stop_clock();  //stopuje timer
        void get_time();    //oblicza i wypisuje zmierzony czas
        void dodaj_sume();
        double get_suma();
        void przygotuj();

};

#endif // TIMER_H
