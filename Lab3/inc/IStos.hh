#ifndef ISTOS_HH
#define ISTOS_HH
#include "ILista.hh"

class IStos:public ILista{
private:

public:

   virtual void push(int Element)=0;
   virtual int pop()=0;
   virtual int Rozmiar()=0;

};

#endif // ISTOS_HH
