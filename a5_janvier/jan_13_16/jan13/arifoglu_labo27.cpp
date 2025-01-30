/*
// Laboratoire  Laboratoire 27 classe Rational
// Date:        15.01.2025
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo27.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

- Transformer le Laboratoire 12 permettant de faire des calculs avec des nombre rationnels en une classe Rational où le type des numérateur et dénominateur
  peut être spécifié librement
- Les nombres rationnels seront toujours mémorisés de sorte que numérateur et dénominateur soient premiers entre eux et que le dénominateur ne soit pas
nul; le constructeur devra donc y veiller et envoyer une exception appropriée, le cas échéant

*/ 
#include <iostream>
#include <cstdlib>
#include <numeric>
#include "rationnel.hpp"
using namespace std;

int main(){
    try {
        // Demande à l'utilisateur de saisir deux nombres rationnels
        int num1, den1, num2, den2;
        cout << "Saisissez le premier numérateur et dénominateur : ";
        cin >> num1 >> den1;
        cout << "Saisissez le deuxième numérateur et dénominateur : ";
        cin >> num2 >> den2;

        // Création des objets Rationnel
        Rationnel<int> r1(num1, den1);
        Rationnel<int> r2(num2, den2);

        // Affichage des opérations
        cout << "Somme      : " << (r1 + r2) << endl;
        cout << "Différence : " << (r1 - r2) << endl;
        cout << "Produit    : " << (r1 * r2) << endl;
        cout << "Quotient   : " << (r1 / r2) << endl;

        // Affichage des opérations de comparaison
        cout << "Égalité           : " << (r1 == r2 ? "Vrai" : "Faux") << endl;
        cout << "Différence        : " << (r1 != r2 ? "Vrai" : "Faux") << endl;
        cout << "Inférieur         : " << (r1 < r2  ? "Vrai" : "Faux") << endl;
        cout << "Supérieur         : " << (r1 > r2  ? "Vrai" : "Faux") << endl;
        cout << "Inférieur ou égal : " << (r1 <= r2 ? "Vrai" : "Faux") << endl;
        cout << "Supérieur ou égal : " << (r1 >= r2 ? "Vrai" : "Faux") << endl;

      //Rationnel<int> r3(1, 0);  // Doit lever une exception

    } catch (const std::invalid_argument& e) {
        cout << "Erreur: " << e.what() << endl;
    }
  
  return EXIT_SUCCESS;
}
/*
g++ -c rationnel.cpp -std=c++20
g++ rationnel.o arifoglu_labo27.cpp -o arifoglu_labo27.exe -std=c++20
*/