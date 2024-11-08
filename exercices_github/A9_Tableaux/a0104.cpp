/*
Indiquer ce que va afficher chacune des séquences d'instructions suivantes :

Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"
*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
   // no 1
   //array<int, 3> a{1, 2, 3};
   //array<int, 3> b{1, 3, 2};
   //cout << boolalpha << (a < b); // true

   // no 2
   //array<int, 3> a{1, 2, 3};
   //array<int, 4> b{1, 2, 3, 4};
   //cout << boolalpha << (a < b); //  erreur.Les 2 arrays à comparer doivent être de même longueur.
   
   // no 3
   //array<int, 3> a{1, 2, 3};
   //array<short, 3> b{2, 3, 1};
   //cout << boolalpha << (a < b); // erreur .Les 2 arrays à comparer doivent être de même type.

      // no 3
      array<int, 4> a{1, 2, 3};
      array<int, 4> b{1, 2, 3, -1};
      array<int, 4> c{1, 2, 3, 1};
      cout << boolalpha << (a < b) << endl << (a < c) << endl << (b < c); // falsetruetrue
    return EXIT_SUCCESS;
}