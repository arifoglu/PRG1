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
#include <stdexcept>
#include "unsigned.hpp"
#include "Int.hpp"
using namespace std;


int main() {

    /*
    Les résultats sont obtenus grâce aux constructeurs de la classe. Le constructeur par défaut initialise la valeur absolue à zéro et indique que le nombre n’est pas négatif. Les constructeurs pour les entiers et les chaînes analysent respectivement le signe et le contenu pour déterminer si le nombre est négatif, tout en attribuant la valeur absolue correspondante.
    */
    //1)Constructors 
    /*
    try {
        Int i1; // Constructeur par défaut
        cout << "i1: " << i1 << endl;
        // Nombre positif
        Int i2(12345); 
        cout << "i2: " << i2 << endl;
        // Nombre négatif
        Int i3(-6789); 
        cout << "i3: " << i3 << endl;
        // Chaîne négative
        Int i4("-12345"); 
        cout << "i4: " << i4 << endl;
        // Chaîne positive
        Int i5("6789"); 
        cout << "i5: " << i5 << endl;
    } catch (const exception &e) {
        cerr << "Erreur: " << e.what() << endl;
    }
    */

   //2)opérateurs comparaison && arithmétiques
   /*
    Int i1(15);
    Int i2(-10);

    // Test des opérateurs de comparaison
    cout << "i1 == i2: " << (i1 == i2) << endl;

    // Test de !=
    cout << "i1 != i2: " << (i1 != i2) << endl;

    // Test de <
    cout << "i1 < i2 : " << (i1 < i2) << endl;

    // Test de >
    cout << "i1 > i2 : " << (i1 > i2) << endl;

    // Test de <=
    cout << "i1 <= i2: " << (i1 <= i2) << endl;

    // Test de >=
    cout << "i1 >= i2: " << (i1 >= i2) << endl;

    //Test des opérateurs arithmétiques
    // Test de +=
    i1 += i2;
    cout << "i1 += i2: " << i1 << endl;

    // Test de -=
    i1 -= i2;
    cout << "i1 -= i2: " << i1 << endl;

    // Test de *=
    i1 *= i2;
    cout << "i1 *= i2: " << i1 << endl;
    */

   //3)Opérateurs arithmétiques + - * / %
   /*
    Int i1(10);
    Int i2(-5);

    cout << "Test des opérateurs arithmétiques (de façon canonique)" << endl;

    try {
        Int somme = i1 + i2;
        cout << "i1 + i2 = " << somme << endl;

        Int difference = i1 - i2;
        cout << "i1 - i2 = " << difference << endl;

        Int produit = i1 * i2;
        cout << "i1 * i2 = " << produit << endl;

        Int quotient = i1 / i2;
        cout << "i1 / i2 = " << quotient << endl;

        Int modulo = i1 % i2;
        cout << "i1 % i2 = " << modulo << endl;

    } catch (const std::exception &e) {
        cerr << "Erreur : " << e.what() << endl;
    }
    */

   //4)Opérateurs d'incrémentation et de décrémentation
   /*
    Int i1(5);
    Int i2(-5);

    cout << "Test des opérateurs d'incrémentation et de décrémentation" << endl;

    cout << "i1 avant ++ : " << i1 << endl;
    ++i1;
    cout << "i1 après ++ : " << i1 << endl;

    cout << "i1 avant -- : " << i1 << endl;
    --i1;
    cout << "i1 après -- : " << i1 << endl;

    cout << "i2 avant ++ : " << i2 << endl;
    ++i2;
    cout << "i2 après ++ : " << i2 << endl;

    cout << "i2 avant -- : " << i2 << endl;
    --i2;
    cout << "i2 après -- : " << i2 << endl;
     */

    //5)fibonacci et factorielle
    /*
    // Test fibonacci
     for (unsigned int i = 0; i <= 10; ++i) {
        try {
            Int fib = Int::fibonacci(i);
            cout << "Fibonacci(" << i << ") = " << fib << endl;
        } catch (const exception &e) {
            cerr << "Erreur Fibonacci(" << i << ") : " << e.what() << endl;
        }
    }

    // Test Factorielle
    for (unsigned int i = 0; i <= 10; ++i) {
        try {
            Int fact = Int::factorielle(i);
            cout << i << "! = " << fact << endl;
        } catch (const exception &e) {
            cerr << "Erreur Factorielle(" << i << ") : " << e.what() << endl;
        }
    }
    */

    //6)affichage ios_base
    /*
    //
    Int positif(123);
    Int negatif(-456);

    // Afficher les nombres positifs 
    cout.setf(ios::showpos);
    cout << "Positif : " << positif << endl;

    // Afficher les nombres négatifs
    cout.unsetf(ios::showpos);
    cout << "Négatif : " << negatif << endl;

    // Afficher 
    cout.width(10);
    cout << "Affichage avec largeur : " << positif << endl;
    */

    return EXIT_SUCCESS;
}

    





















// g++ -c Int.cpp -o Int.o -std=c++20
// g++ -c unsigned.cpp -o unsigned.o -std=c++20 
// g++ -c Setbase.cpp -o Setbase.o -std=c++20 
// gppw Int.o unsigned.o Setbase.o arifoglu_labo26.cpp -o arifoglu_labo26.exe
// ./arifoglu_labo26.exe