#ifndef ELEMENT_H
#define ELEMENT_H
#include "element.h"

class element
{
public:
    element(int x);
    friend class kolejka_head;
    element* next;
    int value;
};

#endif // ELEMENT_H
