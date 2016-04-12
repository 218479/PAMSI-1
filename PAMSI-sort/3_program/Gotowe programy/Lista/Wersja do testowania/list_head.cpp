#include "element.h"
#include "interface.h"
#include "list_head.h"
#include <iostream>

using namespace std;

list_head::list_head()
{
    first=NULL;
    last=NULL;
}

void list_head::find_in_list(int value)
{
    element* pointer = first;
    while((pointer->next !=0)&&(pointer->value != value))
    {
        pointer = pointer->next;
    }
}

//Zwraca i wypisuje rozmiar listy
int list_head::size()
{
    int list_size=0;
    element* pointer = first;
    if (first)
    {
        while(pointer)
        {
            // cout<<"Wartosc elementu: "<<pointer->value<<endl;
            pointer = pointer->next;
            list_size++;
        }
    }
    //  cout<<"List size:"<<list_size<<endl; //Smieci w terminalu
    return list_size;
}

//Adds element at 'position' at the list
int list_head::add(int x, int position)
{
    int list_size = size();
    element * n_element = new element(x);
    // If list is empty
    if(first==0)
    {
        first =last= n_element;
        // cout<<"*List empty"<<endl<<"*Added element at position: 1"<<endl;
    }
    // Add element at the end of the list
    else if(list_size+1==position)
    {
        last->next=n_element;
        last=n_element;
        last->next=NULL;
        //cout<<"*Added element at position: "<<position<<endl;
    }
    // Add element at the beginning of the list
    else if(list_size == 1)
    {
        first->next=n_element;
        first = n_element;
        // cout<<"*Added element at position: "<<position<<endl;
    }
    // Add element inside the list
    else
    {
        element* whos_before = get(position-1);
        element* who_was_there = whos_before->next;
        n_element->next = who_was_there;
        whos_before->next=n_element;
        // cout<<"*Added element at position: "<<position<<endl;
    }
}
// Returns pointer to element at 'position'
element* list_head::get(int position)
{
    int current_position = 0;
    if(first!=0)
    {
        element* pointer = first;
        current_position++;
        while(current_position<position)
        {
            pointer = pointer->next;
            current_position++;
        }
        return pointer;
    }
    else
        cout<<"List is empty!"<<endl;
}
// Removes element from the list
void list_head::remove(int position)
{
    int list_size=size();
    int value;
    // remove element from the end of the list
    if(list_size==position)
    {
        element* whos_before = get(position-1);
        value=whos_before->next->value;
        delete whos_before->next;
        whos_before->next=0;
    }
    // remove element at the beginning of the list
    else if (position==1)
    {
        element* whos_after = get(position+1);
        value=first->value;
        delete first;
        first = whos_after;
    }
    // remove element from list
    else
    {
        element* whos_before = get(position-1);
        value=whos_before->next->value;
        element* whos_after = whos_before->next->next;
        delete whos_before->next;
        whos_before->next=whos_after;
    }
    cout<<endl<<"*element:"<<endl<<"*position: "<<position<<endl<<"*value: "<<value<<endl<<"REMOVED!"<<endl<<endl;
}
void list_head::Quick_sort()
{
    int list_size=size();
    element *p=first;
    element *m=p->next;
    element *pivot=get(list_size/2);
    element *q=pivot->next;
    while(p!=pivot)
    {
        if(p->value<m->value)
        {

        }

        p=p->next;
        m=p->next;
    }

}
