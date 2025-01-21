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
    Matrice(int n, int m) : lignes(n), colonnes(m) {
        if (m != n + 1) {
            throw invalid_argument("La matrice doit etre de taille n x (n+1) !");
        }

        valeurs = new T*[lignes];
        for (int i = 0; i < lignes; i++) {
            valeurs[i] = new T[colonnes]();
        }
    }

    // Destructeur
    ~Matrice() {
        for (int i = 0; i < lignes; i++) {
            delete[] valeurs[i];
        }
        delete[] valeurs;
    }

    // Getter
    T operator()(int i, int j) const {
        if (i < 0 || i >= lignes || j < 0 || j >= colonnes) {
            throw out_of_range("Indice hors des limites de la matrice.");
        }
        return valeurs[i][j];
    }

    // Setter
    T& operator()(int i, int j) {
        if (i < 0 || i >= lignes || j < 0 || j >= colonnes) {
            throw out_of_range("Indice hors des limites de la matrice.");
        }
        return valeurs[i][j];
    }

    // Lecture des elements de la matrice
    void lireMatrice() {
        cout << "Saisissez les elements de la matrice (" << lignes << "x" << colonnes << ") :" << endl;
        for (int i = 0; i < lignes; i++) {
            for (int j = 0; j < colonnes; j++) {
                cin >> valeurs[i][j];
            }
        }
    }

    // Afficher la matrice
    void afficherMatrice() const {
        cout << "Matrice :" << endl;
        for (int i = 0; i < lignes; i++) {
            for (int j = 0; j < colonnes; j++) {
                cout << valeurs[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Methode pour pivoter la matrice
    void pivoter(int colonne) {
        int pivotIndex = colonne;
        T maxValeur = abs(valeurs[colonne][colonne]);

        // Trouver le plus grand element en valeur absolue dans la colonne actuelle
        for (int i = colonne + 1; i < lignes; i++) {
            if (abs(valeurs[i][colonne]) > maxValeur) {
                maxValeur = abs(valeurs[i][colonne]);
                pivotIndex = i;
            }
        }

        // Verifier si le pivot est nul
        if (maxValeur == 0) {
            throw runtime_error("Impossible de pivoter : pivot nul.");
        }

        // Echanger la ligne actuelle avec la ligne du pivot
        if (pivotIndex != colonne) {
            swap(valeurs[colonne], valeurs[pivotIndex]);
        }

        // Normaliser la ligne de pivot
        T pivot = valeurs[colonne][colonne];
        for (int j = 0; j < colonnes; j++) {
            valeurs[colonne][j] /= pivot;
        }

        // Eliminer les elements de la colonne pivot dans les autres lignes
        for (int i = 0; i < lignes; i++) {
            if (i != colonne) {
                T facteur = valeurs[i][colonne];
                for (int j = 0; j < colonnes; j++) {
                    valeurs[i][j] -= facteur * valeurs[colonne][j];
                }
            }
        }
    }

    // Methode pour resoudre le systeme d'equations
    T* resoudre() {
        if (lignes + 1 != colonnes) {
            throw invalid_argument("La matrice doit etre de taille n x (n+1) !");
        }

        // Transformation en forme triangulaire superieure
        for (int k = 0; k < lignes; k++) {
            pivoter(k);
        }

        // Substitution arriere pour obtenir les solutions
        T* solution = new T[lignes];
        for (int i = lignes - 1; i >= 0; i--) {
            solution[i] = valeurs[i][colonnes - 1];
            for (int j = i + 1; j < lignes; j++) {
                solution[i] -= valeurs[i][j] * solution[j];
            }
        }

        return solution;
    }
};
