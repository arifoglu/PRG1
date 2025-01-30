#pragma once
#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

template<typename T>
class Matrice {
private:
    int lignes;
    int colonnes;
    T** valeurs;

public:
    // Constructeur
    Matrice(int n, int m);

    // Destructeur
    ~Matrice();

    // Getter
    T operator()(int i, int j) const;

    // Setter
    T& operator()(int i, int j);

    // Lecture des éléments
    void lireMatrice();

    // Afficher la matrice
    void afficherMatrice() const;

    // Pivoter la matrice
    void pivoter(int colonne);

    // Résoudre le système d'équations
    T* resoudre();

    // Surcharge de l'opérateur << pour la matrice
    template<typename U>
    friend ostream& operator<<(ostream& os, const Matrice<U>& matrice);
};

// Surcharge de l'opérateur << pour la matrice
template<typename T>
ostream& operator<<(ostream& os, const Matrice<T>& matrice) {
    for (int i = 0; i < matrice.lignes; i++) {
        for (int j = 0; j < matrice.colonnes; j++) {
            os << matrice.valeurs[i][j] << " ";
        }
        os << endl;
    }
    return os;
}