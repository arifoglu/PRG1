// Laboratoire  Laboratoire 24
// Date:        02.12.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo24.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Exercer l’implantation d’une classe et la programmation d’opérateurs
- Le but de la classe Unsigned est de permettre la manipulation d’entiers non signés de taille arbitraire
- Les données de la classe prendront la forme d’un string codant la valeur entière en binaire, chaque caractère de la chaîne stockant 1 bit
- Prévoir un constructeur à partir d’un string donnant directement le nombre en binaire et un constructeur à partir d’un uint64_t
- Programmer les opérateurs de comparaison
- Programmer les opérateurs += et-= en travaillant bit à bit avec une retenue, comme vu à l’école primaire (avec un traitement très sommaire d’une opération devant générer une valeur négative)
- Programmer de façon canonique les opérateurs d’addition et de soustraction
- Programmer l’opérateur *= (et le * de manière canonique) en pensant à utiliser les opérateurs d’addition en décalant des bits
*/

#include <iostream>
#include <cstdlib>
#include <bitset>
#include <compare>
#include "unsigned.hpp"
using namespace std;


int main() {
    //1)Test des constructors
    /*
    try 
    {
        // Création d'objets Unsigned
        // Binaire valide
        Unsigned u1("1010");
        // Entier uint64_t 
        Unsigned u2(10);     

        // Affichage des représentations binaires
        cout << "u1 (binaire): " << u1.get_format_binaire() << endl;
        cout << "u2 (binaire): " << u2.get_format_binaire() << endl;

        // Test avec une chaîne non valide
        // Devrait lancer une exception
        Unsigned u3("12"); 

    } catch (const invalid_argument &e) {
        cerr << "Erreur : " << e.what() << endl;
    }
    */

    /////////////////////////////////////////////////
    
    //2) Tests des opérateurs de comparaison
    /*

    Unsigned u1("1010"); // Binaire valide  (10 en base 10)
    Unsigned u2(10);     // Entier uint64_t (10 en base 10)
    Unsigned u3("1100"); // Binaire valide  (12 en base 10)

    // Comparaisons ==
    cout << "u1 == u2 : " << (u1 == u2) << endl; 
    cout << "u1 == u3 : " << (u1 == u3) << endl; 

    // Comparaisons !=
    cout << "u1 != u2 : " << (u1 != u2) << endl; 
    cout << "u1 != u3 : " << (u1 != u3) << endl; 

    // Comparaisons <
    cout << "u1 < u3 : " << (u1 < u3) << endl;   
    cout << "u3 < u1 : " << (u3 < u1) << endl;   

    // Comparaisons >
    cout << "u1 > u3 : " << (u1 > u3) << endl;   
    cout << "u3 > u1 : " << (u3 > u1) << endl;   

    // Comparaisons <=
    cout << "u1 <= u2 : " << (u1 <= u2) << endl; 
    cout << "u1 <= u3 : " << (u1 <= u3) << endl; 

    // Comparaisons >=
    cout << "u1 >= u2 : " << (u1 >= u2) << endl; 
    cout << "u1 >= u3 : " << (u1 >= u3) << endl; 
    */

    /////////////////////////////////////////////////
    
    //3)les opérateurs += et-=
    /*

    Unsigned u1("1010");  // 10 en base 10
    Unsigned u2("11");   //  3  en base 10

    // Test de l'opérateur +=
    cout << "u1 avant += : " << u1.get_format_binaire() << endl;
    u1 += u2; // u1 = u1 + u2 (10 + 3 = 13)
    cout << "u1 après += : " << u1.get_format_binaire() << endl; 

    // Test de l'opérateur -=
    cout << "u1 avant -= : " << u1.get_format_binaire() << endl;
    u1 -= u2; // u1 = u1 - u2 (13 - 3 = 10)
    cout << "u1 après -= : " << u1.get_format_binaire() << endl; 

    // Test de soustraction qui devrait échouer
    try {
        Unsigned u3("1");
        u3 -= u2; // Erreur attendue : Résultat négatif
    } catch (const range_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */

    /////////////////////////////////////////////////
   
    //4)les opérateurs d’addition et de soustraction
    /*
    
    Unsigned u1("1010"); // 10 en base 10
    Unsigned u2("11");   // 3  en base 10

    // Test de l'opérateur +
    Unsigned u3 = u1 + u2; // u3 = u1 + u2 (10 + 3 = 13)
    cout << "u1 + u2 = " << u3.get_format_binaire() << endl; 

    // Test de l'opérateur -
    Unsigned u4 = u1 - u2; // u4 = u1 - u2 (10 - 3 = 7)
    cout << "u1 - u2 = " << u4.get_format_binaire() << endl; 

    // Test de soustraction qui devrait échouer
    try {
        Unsigned u5 = u2 - u1; // Erreur attendue : Résultat négatif
    } catch (const range_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */

    /////////////////////////////////////////////////
    
    //5)les opérateurs  *= , *
    /*
    Unsigned u1("1010"); // 10 en base 10
    Unsigned u2("11");   // 3  en base 10

    // Test de l'opérateur *
    Unsigned u3 = u1 * u2; // u3 = u1 * u2 (10 * 3 = 30)
    cout << "u1 * u2 = " << u3.get_format_binaire() << endl; 

    // Test de l'opérateur *=
    cout << "u1 avant *= : " << u1.get_format_binaire() << endl;
    u1 *= u2; // u1 = u1 * u2 (10 * 3 = 30)
    cout << "u1 après *= : " << u1.get_format_binaire() << endl; 
    */

    //////////////////////////////////////////////////
   
    //6)les opérateurs  / , %
    /*
    Unsigned u1("1010"); // 10 en base 10
    Unsigned u2("11");   // 3  en base 10

    // Test de l'opérateur /
    Unsigned u3 = u1 / u2; // u3 = u1 / u2 (10 / 3 = 3)
    cout << "u1 / u2 = " << u3.get_format_binaire() << endl; 

    // Test de l'opérateur %
    Unsigned u4 = u1 % u2; // u4 = u1 % u2 (10 % 3 = 1)
    cout << "u1 % u2 = " << u4.get_format_binaire() << endl; 

    // Test de division par zéro
    try {
        Unsigned u5("0");
        Unsigned u6 = u1 / u5; 
    } catch (const runtime_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */
   
    //////////////////////////////////////////////////
    
    //7)le calcul de factorielles et de nombres de Fibonacci
    
    // Test Fibonacci
    cout << "Calcul des nombres de Fibonacci :" << endl;
    for (unsigned int i = 0; i <= 10; ++i) {
        Unsigned fib = Unsigned::fibonacci(i);
        cout << "F(" << i << ") = " << fib.get_format_binaire()<< endl;
    }

    // Test Factorielle
    cout << "\nCalcul des factorielles :" << endl;
    for (unsigned int i = 0; i <= 10; ++i) {
        Unsigned fact = Unsigned::factorielle(i);
        cout << i << "! = " << fact.get_format_binaire() << endl;
    }
    

    
    return EXIT_SUCCESS;
}

    