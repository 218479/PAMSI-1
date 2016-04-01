#include "Stos.hh"
    void Stos::push(int Element){
        this->dodaj(Element,0);

    }
    int Stos::pop(){
        int tmp=this->get(0);
        this->usun(0);
        return tmp;
    }
    int Stos::Rozmiar(){
        return this->get_size();
    }
