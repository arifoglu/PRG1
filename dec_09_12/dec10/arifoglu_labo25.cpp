// Laboratoire  Laboratoire 25 Test de la classe Unsigned
// Date:        12.12.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo25.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
Le but: Tester la classe Unsigned mise au point au laboratoire 24
1) Mettre à disposition une fonction-membre data() qui retourne un string de la représentation binaire de l’objet Unsigned 
2) Implanter les opérateurs d’incrémentation et de décrémentation
3) Mettre à disposition une classe Setbase comportant une fonction (statique) set_base(int) permettant de modifier la base dans laquelle est affichée un Unsigned ; cette fonction doit mettre la base à 10 si son paramètre est inférieur à 2 ou supérieur à 36.Par défaut, la base d’affichage d’un Unsigned est 10.
4)- Si on cherche à construire un Unsigned avec un string non valide, lancer une exception ainsi :throw  invalid_argument("Ill-formed string for Unsigned");
  - Si le résultat d’une soustraction devait être négatif, lancer : range_error("Negative result") ;
  - Une division par 0 doit lever : runtime_error("Division by 0");
*/

#include <iostream>
#include <cstdlib>
#include <bitset>
#include <compare>
#include "unsigned.h"
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
        cout << "u1 (binaire): " << u1.data() << endl;
        cout << "u2 (binaire): " << u2.data() << endl;

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
    cout << "u1 avant += : " << u1.data() << endl;
    u1 += u2; // u1 = u1 + u2 (10 + 3 = 13)
    cout << "u1 après += : " << u1.data() << endl; 

    // Test de l'opérateur -=
    cout << "u1 avant -= : " << u1.data() << endl;
    u1 -= u2; // u1 = u1 - u2 (13 - 3 = 10)
    cout << "u1 après -= : " << u1.data() << endl; 

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
    cout << "u1 + u2 = " << u3.data() << endl; 

    // Test de l'opérateur -
    Unsigned u4 = u1 - u2; // u4 = u1 - u2 (10 - 3 = 7)
    cout << "u1 - u2 = " << u4.data() << endl; 

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
    cout << "u1 * u2 = " << u3.data()<< endl; 

    // Test de l'opérateur *=
    cout << "u1 avant *= : " << u1.data()<< endl;
    u1 *= u2; // u1 = u1 * u2 (10 * 3 = 30)
    cout << "u1 après *= : " << u1.data()<< endl; 
    */

    //////////////////////////////////////////////////
   
    //6)les opérateurs  / , %
    /*
    Unsigned u1("1010"); // 10 en base 10
    Unsigned u2("11");   // 3  en base 10

    // Test de l'opérateur /
    Unsigned u3 = u1 / u2; // u3 = u1 / u2 (10 / 3 = 3)
    cout << "u1 / u2 = " << u3.data() << endl; 

    // Test de l'opérateur %
    Unsigned u4 = u1 % u2; // u4 = u1 % u2 (10 % 3 = 1)
    cout << "u1 % u2 = " << u4.data() << endl; 

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
    /*
    // Test Fibonacci
    cout << "Calcul des nombres de Fibonacci :" << endl;
    for (unsigned int i = 0; i <= 10; ++i) {
        Unsigned fib = Unsigned::fibonacci(i);
        cout << "F(" << i << ") = " << fib.data() << endl;
    }

    // Test Factorielle
    cout << "\nCalcul des factorielles :" << endl;
    for (unsigned int i = 0; i <= 10; ++i) {
        Unsigned fact = Unsigned::factorielle(i);
        cout << i << "! = " << fact.data() << endl;
    }
    */

    //////////////////////////////////////////////////
    ///////////////Laboratoire 25/////////////////////
    
    //1) Test de l'incrémentation
    /*
    // Pré-incrémentation (++i)
    Unsigned u1("1010"); // 10 en base 10
    cout << "u1 avant ++ : " << u1.data() << endl;
    ++u1; 
    cout << "u1 après ++ : " << u1.data() << endl;

    // Pré-décrémentation (--i)
    Unsigned u2("1010"); // 10 en base 10
    cout << "u2 avant -- : " << u2.data() << endl;
    --u2; 
    cout << "u2 après -- : " << u2.data() << endl;

    // Post-incrémentation (i++)
    Unsigned u3("1010"); // 10 en base 10
    cout << "u3 avant u++ : " << u3.data() << endl;
    u3++; 
    cout << "u3 après u++ : " << u3.data() << endl;

    // Post-décrémentation (i--)
    Unsigned u4("1010"); // 10 en base 10
    cout << "u4 avant u-- : " << u4.data() << endl;
    u4--; 
    cout << "u4 après u-- : " << u4.data() << endl;

    // Test de décrémentation sous zéro
    try {
        Unsigned u5("0");
        --u5; // Devrait lancer une exception
    } catch (const range_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */

    //2) Test la base
    /*
    Unsigned u1("1010"); // 10 en base 10

    // Test avec la base par défaut (10)
    cout << "Base par défaut : " << u1 << endl;

    // Change la base à 2
    Unsigned::Setbase::set_base(2);
    cout << "Base 2 : " << u1 << endl;

    // Change la base à 16
    Unsigned::Setbase::set_base(16);
    cout << "Base 16 : " << u1 << endl;

    // Test avec une base invalide (devrait être réglée à 10)
    Unsigned::Setbase::set_base(50);
    cout << "Base invalide (par défaut 10) : " << u1 << endl;
    */

    //3) Test string non valide,
    /*
    try {
        // Binaire valide
        Unsigned u1("1010");
        cout << "u1 : " << u1.data() << endl;

        // binaire invalide
        Unsigned u2("102");
        cout << "u2 : " << u2.data() << endl;

    } catch (const invalid_argument &e) {
        cerr << "Erreur : " << e.what() << endl;
    }
    */

    //4) Test le soustraction négatif
    /*
    try {
        
        Unsigned u1("1010"); // 10
        Unsigned u2("1");    // 1
        cout << "u1 - u2 = " << (u1 - u2).data() << endl; 

        // résultat negatives
        Unsigned u3("1");
        Unsigned u4("1010"); // 10
        cout << "u3 - u4 = " << (u3 - u4).data() << endl; 
    } catch (const range_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */
    
    //5) Test le division par 0
    /*
    try {
        // division valide 
        Unsigned u1("1010"); // 10
        Unsigned u2("10");   // 2
        cout << "u1 / u2 = " << (u1 / u2).data() << endl; 
        cout << "u1 % u2 = " << (u1 % u2).data() << endl; 

        // division invalide
        Unsigned u3("0"); 
        cout << "u1 / u3 = " << (u1 / u3).data() << endl; 

    } catch (const runtime_error &e) {
        cerr << "Erreur attrapée : " << e.what() << endl;
    }
    */
   
    return EXIT_SUCCESS;
}
// g++ -c unsigned.cpp -o unsigned.o -std=c++20 
// gppw unsigned.o arifoglu_labo25.cpp -o arifoglu_labo25.exe
// ./arifoglu_labo25.exe
    