#include <iostream>
#include "element.h"
#include "list_head.h"
#include "interface.h"
#include "timer.h"
using namespace std;
/*Wersja do testowania.
    Zmiany:
    - dodano timer
    - initiate_list funkcja inicjacji listy o zadanej liczbie elementow
    - list_head::find_in_list funkcja wyszukujaca element o danej 'value'
    - value jest przydzielana dla elementu w sekcji list_head::add i value=position (wczesniej w konstruktorze element() wczytywana z klawiatury)
    */
/*void initiate_list(list_head& List, int list_size){
    for(int i=1; i<=list_size; i++){
        List.add(rand()%10);
    }
}*/

int main()
{
    list_head Lista;
    int tab[]={1,2,3,4};
    Lista.add(1,1);
    Lista.add(2,2);
    Lista.add(3,3);
    Lista.add(4,4);
    cout<<Lista.size()<<endl;
    cout<<endl;
    Lista.Quick_sort();

    return 0;
}
