#ifndef KOLEJKA_HH
#define KOLEJKA_HH
#include "IKolejka.hh"

class Kolejka: public IKolejka
{
private:

public:
   virtual void push(int Element);
   virtual int pop();
   virtual int Rozmiar();

};


#endif // KOLEJKA_HH
