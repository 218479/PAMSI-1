#ifndef KOLEJKA_HEAD_H
#define KOLEJKA_HEAD_H
#include "element.h"

class kolejka_head
{
    public:
        kolejka_head();
        int pop();
        void push(int x);
        int size();
    private:
        element* first; //pointer to first element
        element* last;  //pointer to last element
};

#endif // KOLEJKA_HEAD_H
