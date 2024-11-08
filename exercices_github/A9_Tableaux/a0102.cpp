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
//array<int, 5> a{1, 2, 3, 4, 5};
//cout << a.front() << ' ' << a.back(); // 1 5

// no 2
//array<int, 5> a{1, 2, 3, 4, 5};
//cout << a[1] << ' ' << a[3]; // 2 4

// no 3
//array<int, 5> a{1, 2, 3, 4, 5};
//cout << a[5]; // indetermine

// no 4
//array<int, 5> a{1, 2, 3, 4, 5};
//cout << a.at(1) << ' ' << a.at(3); // 2 4

// no 5
//array<int, 5> a{1, 2, 3, 4, 5};
//cout << a.at(5); // out of range

    return EXIT_SUCCESS;
}