#ifndef IKOLEJKA__HH
#define IKOLEJKA_HH
#include "ILista.hh"


class IKolejka:public ILista
{
private:

public:
   virtual void push(int Element)=0;
   virtual int pop()=0;
   virtual int Rozmiar()=0;

};


#endif // IKOLEJKA__HH
