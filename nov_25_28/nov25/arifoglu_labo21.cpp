// Laboratoire  Laboratoire 21
// Date:        25.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo21.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Le buts: Exercer la généricité
- Rendre le tri par peigne générique avec comme prototype :
      template <typename T> void comb_sort(T start, T end);
- start donne un accès au premier élément du tableau à trier end pointe vers l’élément qui suit le dernier à trier
- comb_sort(t, t+n);            =>  permet de trier un tableau natif t de n éléments
  comb_sort(c.begin(), c.end());=>  permet de trier un conteneur c
- Fixer les valeurs de l’écartement des dents du peigne et de leur facteur de diminution directement dans le code avec les meilleures valeurs trouvées au laboratoire 20 précédent

*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "comb_sort.hpp"
using namespace std;

int main() {
    //tester tableau natif
    int t[] = {64, 34, 25, 12, 11, 90};
    size_t n = sizeof(t) / sizeof(t[0]);
    //tri sur tableau natif
    comb_sort(t, t + n);  
    cout << "Comb_sort(tableau natif): ";
    for (size_t i = 0; i < n; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;

    // tester vector
    vector<int> c = {64, 34, 25, 12, 11, 90};
    //tri sur vector
    comb_sort(c.begin(), c.end());
    cout << "Comb_sort(vector)       : ";
    for (size_t val : c) {
        cout << val << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}

