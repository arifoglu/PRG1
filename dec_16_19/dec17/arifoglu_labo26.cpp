// Laboratoire  Laboratoire 26 classe Int
// Date:        16.12.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo26.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Sur la base de la classe Unsigned précédemment mise au point, concevoir une classe Int permettant de disposer d’une arithmétique entière signée avec des nombres a priori non limités
- Penser à réutiliser au maximum les fonctionnalités de la classe Unsigned pour une implantation aussi simple que possible
- Pour cette classe, prévoir des manipulateurs cohérents avec ios_base, en s’inspirant notamment des instructions suivantes permettant d’obtenir des informations sur le format du prochain affichage :
    - std::ios_base::fmtflags flags = std::cout.flags();
    - if (flags & std::ios_base::showpos) ...
    - std::cout.width()
*/

#include <iostream>
#include <cstdlib>
#include "unsigned.hpp"
#include "Int.hpp"
using namespace std;


int main() {

    Int i1;
    cout << "i1 (par défaut)                : " << i1 <<endl;
    Int i2(34);
    cout << "i2 (constructor positif)       : " << i2 <<endl;
    Int i3(-34);
    cout << "i3 (constructor negatif)       : " << i3 <<endl;
    Int i4("12345");
    cout << "i4 (constructor string positif): " << i4 << endl;
  
    return EXIT_SUCCESS;
}

    





















// g++ -c Int.cpp -o Int.o -std=c++20
// g++ -c unsigned.cpp -o unsigned.o -std=c++20 
// g++ -c Setbase.cpp -o Setbase.o -std=c++20 
// gppw Int.o unsigned.o Setbase.o arifoglu_labo26.cpp -o arifoglu_labo26.exe
// ./arifoglu_labo26.exe