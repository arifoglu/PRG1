#include "matrice.hpp"
#include <cmath>
#include <fstream>


template<typename T>
Matrice<T>::Matrice(int n, int m) : lignes(n), colonnes(m) {
    if (m != n + 1) {
        throw std::invalid_argument("La matrice doit être de taille n x (n+1) !");
    }
    // Allocation de mémoire pour les valeurs de la matrice
    valeurs = new T*[lignes];
    for (int i = 0; i < lignes; i++) {
        valeurs[i] = new T[colonnes];
    }
}

// libérer la mémoire
template<typename T>
Matrice<T>::~Matrice() {
    for (int i = 0; i < lignes; i++) {
        delete[] valeurs[i];
    }
    delete[] valeurs;
}

// Lecture de la matrice depuis un fichier
template<typename T>
void Matrice<T>::lireMatrice(ifstream& fichier) {
    for (int i = 0; i < lignes; ++i) {
        for (int j = 0; j < colonnes; ++j) {
            fichier >> valeurs[i][j];
            if (fichier.fail()) {
                cerr << "Erreur de lecture à la position (" << i << ", " << j << ")" << endl;
                throw runtime_error("Erreur de lecture du fichier !");
            }
        }
    }
}

// afficher la matrice
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


// Attribuer une valeur à une cellule spécifique
template<typename T>
void Matrice<T>::setValeur(int ligne, int colonne, T valeur) {
    if (ligne < 0 || ligne >= lignes || colonne < 0 || colonne >= colonnes) {
        throw out_of_range("Index hors limites !");
    }
    valeurs[ligne][colonne] = valeur;
}

// Obtenir une valeur d'une cellule spécifique
template<typename T>
T Matrice<T>::getValeur(int ligne, int colonne) const {
    if (ligne < 0 || ligne >= lignes || colonne < 0 || colonne >= colonnes) {
        throw out_of_range("Index hors limites !");
    }
    return valeurs[ligne][colonne];
}

// 
// Méthode pour pivoter la matrice
template<typename T>
void Matrice<T>::pivoter(int colonne) {
    int pivotIndex = colonne; // Index de la ligne avec le plus grand pivot
    T maxValeur = abs(valeurs[colonne][colonne]); // Valeur absolue du pivot actuel

    // Recherche de l'élément avec la valeur absolue maximale dans la colonne
    for (int i = colonne + 1; i < lignes; i++) {
        if (abs(valeurs[i][colonne]) > maxValeur) {
            maxValeur = abs(valeurs[i][colonne]);
            pivotIndex = i;
        }
    }

    // Vérification si le pivot est nul
    if (maxValeur == 0) {
        throw std::runtime_error("Impossible de pivoter : pivot nul.");
    }

    // Échange de lignes si nécessaire
    if (pivotIndex != colonne) {
        std::swap(valeurs[colonne], valeurs[pivotIndex]);
        std::cout << "Pivot sélectionné pour la colonne " << colonne + 1 
                  << ": ligne " << pivotIndex + 1 << std::endl;
        std::cout << "Matrice après pivotage pour colonne " << colonne + 1 << " :" << std::endl;
        afficherMatrice();
    }
}




// Vérifie si une contradiction est détectée dans une ligne
template<typename T>
bool Matrice<T>::verifierContradiction(int ligne) const {
    bool ligneNulle = true;
    for (int j = 0; j < colonnes - 1; j++) {
        if (valeurs[ligne][j] != 0) {
            ligneNulle = false;
            break;
        }
    }
    return ligneNulle && valeurs[ligne][colonnes - 1] != 0;
}

template<typename T>
T* Matrice<T>::resoudre() {
    if (lignes + 1 != colonnes) {
        throw invalid_argument("La matrice doit être de taille n x (n+1) !");
    }

    cout << "Matrice initiale :" << endl;
    afficherMatrice();

    // Étape 1 : Triangularisation
    for (int k = 0; k < lignes; k++) {
        cout << "Avant pivotage pour colonne " << k + 1 << " :" << endl;
        afficherMatrice();

        pivoter(k);

        for (int i = k + 1; i < lignes; i++) {
            T facteur = valeurs[i][k] / valeurs[k][k];
            cout << "Réduction de la ligne " << i + 1 << " avec le facteur : " << facteur << endl;

            for (int j = k; j < colonnes; j++) {
                valeurs[i][j] -= facteur * valeurs[k][j];
            }

            cout << "Matrice après réduction de la ligne " << i + 1 << " :" << endl;
            afficherMatrice();
        }
    }

    // Étape 2 : Substitution arrière
    T* solution = new T[lignes];
    for (int i = lignes - 1; i >= 0; i--) {
        T somme = valeurs[i][colonnes - 1];
        for (int j = i + 1; j < colonnes - 1; j++) {
            somme -= valeurs[i][j] * solution[j];
        }

        if (valeurs[i][i] == 0) {
            throw runtime_error("Impossible de résoudre : division par zéro.");
        }

        solution[i] = somme / valeurs[i][i];
        cout << "Solution intermédiaire pour x" << i + 1 << " : " << solution[i] << endl;
    }

    return solution;
}





// Instanciation explicite 
template class Matrice<int>;
template class Matrice<double>;
template class Matrice<Rationnel<int> >;
