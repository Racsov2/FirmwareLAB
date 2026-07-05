#include <iostream> 
#include <iomanip>
#include "MemoryExplorer.hpp"

int main()
{
    int numero = 10;
    int edad = 23;
    int altura = 180;

    printHeader();

    printVariable("numero", numero);
    printVariable("edad", edad);
    printVariable("altura", altura);

    printFooter();
}