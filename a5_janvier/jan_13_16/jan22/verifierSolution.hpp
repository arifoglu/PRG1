#ifndef VERIFIERSOLUTION_HPP
#define VERIFIERSOLUTION_HPP

#include <cmath>
#include <type_traits>
#include "rationnel.hpp"
#include "matrice.hpp"
#include "Int.hpp" 

template <typename T>
bool verifierSolution(const Matrice<T>& matrice, const T* solution, int lignes, int colonnes) {
    T threshold = T(1);
    if constexpr (std::is_same_v<T, Rationnel<Int>>) {
        threshold = T(1, 1e9);
    }

    for (int i = 0; i < lignes; ++i) {
        T somme = matrice(i, colonnes - 1);
        for (int j = 0; j < colonnes - 1; ++j) {
            somme -= matrice(i, j) * solution[j];
        }
        if (std::abs(somme) > threshold) {
            return false;
        }
    }
    return true;
}

#endif
