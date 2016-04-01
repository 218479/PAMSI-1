#ifndef STOS_HH
#define STOS_HH
#include "IStos.hh"

class Stos: public IStos
{
private:

public:
   virtual void push(int Element);
   virtual int pop();
   virtual int Rozmiar();

};


#endif // STOS_HH

