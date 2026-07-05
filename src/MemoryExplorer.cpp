#include <iostream>
#include <iomanip>
#include "MemoryExplorer.hpp"

void printSeparator()
{
    std::cout << "=============================================\n";
}

void printHeader(){

    std::cout << "=============================\n";
    std::cout << "VARIABLES EN MEMORIA\n";
    std::cout << "=============================\n";

    std::cout <<"Variable\tValor\tDireccion\n";
    std::cout <<"------------------------------\n";

}

void printFooter(){
    std::cout <<"-----------------------------\n";
}

void printVariable(const char* name, int& value){
    std::cout << std::setw(8) << name  
              << std::setw(10) << value 
              << std::setw(18) << &value 
              << "\n";
}