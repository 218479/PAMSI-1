#include <iostream>
#include "element.h"
#include "kolejka_head.h"
#include "Test_tablica.hh"

using namespace std;

int main()
{
    kolejka_head Nowa;
    Nowa.push(10);
    Nowa.push(100);
    Nowa.push(1000);
    Nowa.push(10000);
    Nowa.push(100000);
    Nowa.push(1000000);
    Nowa.push(10000000);
    Nowa.push(100000000);
    Nowa.push(1000000000);

    Test_tablica Test;
    for(int i=0;i<9;i++)
    {
    Test.set_tablice(Nowa.pop());
    Test.wykonaj();
    }
    return 0;
}
