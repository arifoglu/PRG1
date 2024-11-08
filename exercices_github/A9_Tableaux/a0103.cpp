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
    //for(size_t i = 1; i <= 3; ++i)
    //cout << a.at(i) << ' '; //2 3 4

    // no 2
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(size_t i = a.size()-1; i >= 0; --i)
    //cout << a.at(i) << ' '; // 5 4 3 2 1

    // no 3
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(size_t i = 0; i < a.size(); ++i)
    //cout << a.at(i) << ' ';  // 1 2 3 4 5
    
    // no 4
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(size_t i = 3; i < a.size(); --i)
    //cout << a.at(i) << ' '; //  4 3 2 1 
    
    // no 5
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(size_t i = 3; i > 0; --i)
    //cout << a.at(i) << ' '; // 4 3 2
    
    // no 6
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(int i : a)
    //cout << i << ' '; // 1 2 3 4 5

    // no 7
    //array<int, 5> a{1, 2, 3, 4, 5};
    //for(int i : a)
    //   i *= i;
    //for(int i : a)
    //cout << i << ' ';  // 1 2 3 4 5 

    // no 8
    array<int, 5> a{1, 2, 3, 4, 5};
    for(int& i : a)
       i *= i;
    for(int i : a)
       cout << i << ' '; // 1 4 9 16 25

    return EXIT_SUCCESS;
}