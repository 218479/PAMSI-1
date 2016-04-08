#ifndef LIST_HEAD_H
#define LIST_HEAD_H
#include "interface.h"
#include "element.h"

class list_head: public interface
{
public:
    list_head();
    void find_in_list(int value);
    int add(int x,int position);
    int size();
    element* get(int position);
    void remove(int position);
    void Quick_sort();
private:
    element * first;
    element * last;
};

#endif // LIST_HEAD_H
