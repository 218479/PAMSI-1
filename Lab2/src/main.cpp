#include <iostream>
#include <time.h>
#include "stoper.hh"
#include "Tablica_dynamiczna.hh"
#include "Interfejs.hh"

using namespace std;

int main()
{
    tablica_dyn Tablica;
    Interfejs_klasa *Menu;
    Menu=&Tablica;
    Menu->wykonaj();
    return 0;
}
