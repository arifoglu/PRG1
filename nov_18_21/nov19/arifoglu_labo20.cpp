// Laboratoire  Laboratoire 20
// Date:        19.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo20.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Optimisation et comparaison d’algorithmes de tri
- Un tri à peigne est caractérisé par un paramètre diminuant l’écart des dents
- On peut améliorer un tri à peigne en basculant vers un tri par insertion lorsque l’écart des dent est plus petit qu’une certaine limite
*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>
#include "algorithm_tri.hpp"
using namespace std;

int main() {
    //Les données à trier
    vector<int> data{64, 34, 25, 12, 11, 90};
    //shrink value => https://en.wikipedia.org/wiki/Comb_sort
    double shrink = 1.3;
    size_t min_gap = 1; 
    
    // test comb_sort
    test_algorithm(data,shrink,min_gap,comb_sort);
    cout << endl;
    // test insertion_sort
    test_algorithm_insertion(data,insertion_sort);
    cout << endl;
    // test tri fusion
    test_algorithm_fusion(data, tri_fusion);

    return EXIT_SUCCESS;
}
