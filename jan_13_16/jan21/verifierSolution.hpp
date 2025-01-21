#ifndef VERIFIER_SOLUTION_HPP
#define VERIFIER_SOLUTION_HPP

#include "matrice.hpp" 
#include <cmath>      
 
template<typename T>
bool verifierSolution(const Matrice<T>& matrice, const T* solution, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        T somme = matrice(i, colonnes - 1); 
        for (int j = 0; j < colonnes - 1; j++) {
            somme -= matrice(i, j) * solution[j];
        }
        // float/double 
        if (std::fabs(somme) > 1e-9) {
            return false; 
        }
    }
    return true; 
}

#endif 
