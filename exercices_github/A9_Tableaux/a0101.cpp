/*
Indiquer ce que va afficher chacune des séquences d'instructions suivantes :

Il se peut qu'une séquence provoque une erreur à la compilation ou à l'exécution, voire ait un comportement indéfini. Le cas échéant, répondez "Erreur à la compilation", "Erreur à l'exécution" ou "Comportement indéfini"
*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    //no1
    //array<int, 3> a;
    //for(int e : a) cout << e << " \n"; // indeterminé

    //no2
    //array<int, 3> a{1,2};
    //for(int e : a) cout << e << " \n"; // 1,2,0

    // no 3
    //array<int,3> a{1,2,3,4};
    //for(int e : a) cout << e << ' \n'; // compile pas

    //no 4
    //array<int,3> a{};
    //for(int e : a) cout << e << " \n"; // 000

    // no 5
    array<string,3> a;
    for(const string & e : a) cout << e.size() << ' '; // indeterminé



    return EXIT_SUCCESS;
}