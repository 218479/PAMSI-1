#ifndef ILISTA_HH
#define ILISTA_HH

class ILista
{
private:

public:
    virtual int dodaj(int Element,int nr)=0;
    virtual void usun(int pozycja)=0;
    virtual int get(int nr)=0;
    virtual int get_size()=0;

};

#endif // LISTA_HH
