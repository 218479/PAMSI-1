#include "kolejka_head.h"
#include "element.h"
#include <iostream>

using namespace std;

kolejka_head::kolejka_head()
{
    this->first=0;
    this->last=0;
}

// Adds element at back of the queue
void kolejka_head::push(int x){
    element* n_element = new element(x);
// If queue empty
    if(first==0 && last==0){
        first=n_element;
        last=n_element;
    }
    // If other elements in queue
    else{
        element* pointer = last;
        while(pointer->next!=0){
            pointer=pointer->next;
        }
        pointer->next=n_element;
        last=n_element;
    }
}
// Returns zise of queue
int kolejka_head::size(){
    int kolejka_size=0;
    if (first!=0){
        kolejka_size++;
        element* pointer = first;
        while(pointer->next!=0){
            pointer = pointer->next;
            kolejka_size++;
        }
    }
    return kolejka_size;
}
// Removes first element from the queue
int kolejka_head::pop(){
    int wartosc=first->value;
    if(first==0&&last==0){
        cout<<"Kolejka is empty!"<<endl;
    }
    else{
        element* whos_after = first->next;
        delete first;
        first = whos_after;
    }
    return wartosc;
}
