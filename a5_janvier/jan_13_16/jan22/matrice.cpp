#include "matrice.hpp"
#include "rationnel.hpp"
#include "unsigned.hpp"
#include <cmath> 
#include <fstream>

// Constructeur
template<typename T>
Matrice<T>::Matrice(int n, int m) : lignes(n), colonnes(m) {
    if (m != n + 1) {
        throw invalid_argument("La matrice doit être de taille n x (n+1) !");
    }
    // Allocation de mémoire pour les valeurs de la matrice
    valeurs = new T*[lignes];
    for (int i = 0; i < lignes; i++) {
        valeurs[i] = new T[colonnes]();
    }
}

// Destructeur (libérer la mémoire)
template<typename T>
Matrice<T>::~Matrice() {
    for (int i = 0; i < lignes; i++) {
        delete[] valeurs[i];
    }
    delete[] valeurs;
}

// Getter
template<typename T>
T Matrice<T>::operator()(int i, int j) const {
    if (i < 0 || i >= lignes || j < 0 || j >= colonnes) {
        throw out_of_range("Indice hors des limites de la matrice.");
    }
    return valeurs[i][j];
}

// Setter
template<typename T>
T& Matrice<T>::operator()(int i, int j) {
    if (i < 0 || i >= lignes || j < 0 || j >= colonnes) {
        throw out_of_range("Indice hors des limites de la matrice.");
    }
    return valeurs[i][j];
}

// Lecture des éléments
template<typename T>
void Matrice<T>::lireMatrice(std::ifstream& fichier) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            fichier >> valeurs[i][j];
            if (fichier.fail()) {
                cerr << "Erreur de lecture à la position (" << i << ", " << j << ")" << endl;
                throw runtime_error("Erreur de lecture du fichier !");
            }
        }
    }
}

// Afficher la matrice
template<typename T>
void Matrice<T>::afficherMatrice() const {
    cout << "Matrice :" << endl;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            cout << valeurs[i][j] << " ";
        }
        cout << endl;
    }
}

template<typename T>
void Matrice<T>::pivoter(int colonne) {
    int pivotIndex = colonne;

    
    T maxValeur;
    if constexpr (std::is_same_v<T, Rationnel<int>>) {
        maxValeur = valeurs[colonne][colonne];
        if (maxValeur < T(0)) {
            maxValeur = -maxValeur;
        }
    } else if constexpr (std::is_same_v<T, Unsigned>) {
        maxValeur = valeurs[colonne][colonne]; 
    } else {
        maxValeur = std::abs(static_cast<long double>(valeurs[colonne][colonne]));
    }

    for (int i = colonne + 1; i < lignes; i++) {
        T absValeur;
        if constexpr (std::is_same_v<T, Rationnel<int>>) {
            absValeur = valeurs[i][colonne];
            if (absValeur < T(0)) {
                absValeur = -absValeur;
            }
        } else if constexpr (std::is_same_v<T, Unsigned>) {
            absValeur = valeurs[i][colonne]; 
        } else {
            absValeur = std::abs(static_cast<long double>(valeurs[i][colonne]));
        }

        if (absValeur > maxValeur) {
            maxValeur = absValeur;
            pivotIndex = i;
        }
    }

    if (maxValeur == 0) {
        throw runtime_error("Impossible de pivoter : pivot nul.");
    }

    if (pivotIndex != colonne) {
        swap(valeurs[colonne], valeurs[pivotIndex]);
    }

    T pivot = valeurs[colonne][colonne];
    for (int j = 0; j < colonnes; j++) {
        valeurs[colonne][j] /= pivot;
    }

    for (int i = 0; i < lignes; i++) {
        if (i != colonne) {
            T facteur = valeurs[i][colonne];
            for (int j = 0; j < colonnes; j++) {
                valeurs[i][j] -= facteur * valeurs[colonne][j];
            }
        }
    }
}



// Résoudre le système d'équations
template<typename T>
T* Matrice<T>::resoudre() {
    cout << "Matrice initiale :" << endl;
    afficherMatrice();

    for (int k = 0; k < lignes; k++) {
        pivoter(k);
    }

    T* solution = new T[lignes];
    for (int i = lignes - 1; i >= 0; i--) {
        solution[i] = valeurs[i][colonnes - 1];
        for (int j = i + 1; j < lignes; j++) {
            solution[i] -= valeurs[i][j] * solution[j];
        }
        if (valeurs[i][i] == 0) {
            throw runtime_error("Impossible de résoudre : division par zéro.");
        }
    }

    return solution;
}



// Explicit Instantiation
template class Matrice<int>;
template class Matrice<double>;
template class Matrice<float>;
template class Matrice<Rationnel<int> >;
template class Matrice<Unsigned>;
template class Matrice<uint64_t>;