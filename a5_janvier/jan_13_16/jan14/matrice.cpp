#include "matrice.hpp"
#include <cmath>

template<typename T>
Matrice<T>::Matrice(int n, int m) : lignes(n), colonnes(m) {
    if (m != n + 1) {
        throw std::invalid_argument("La matrice doit être de taille n x (n+1) !");
    }

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

// lire la matrice depuis l'entrée standard
template<typename T>
void Matrice<T>::lireMatrice() {
    cout << "Saisissez les éléments de la matrice (" << lignes << "x" << colonnes << ") :" << endl;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            cin >> valeurs[i][j];
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

// Méthode pour pivoter la matrice
template<typename T>
void Matrice<T>::pivoter(int colonne) {
    int pivotIndex = colonne;
    T maxValeur = abs(valeurs[colonne][colonne]);

    // Trouver le plus grand élément en valeur absolue dans la colonne actuelle
    for (int i = colonne + 1; i < lignes; i++) 
    {
        if (abs(valeurs[i][colonne]) > maxValeur) 
        { 
            maxValeur = abs(valeurs[i][colonne]);
            pivotIndex = i;
        }
    }

    // Vérifier si le pivot est 0 (système impossible à résoudre)
    if constexpr (std::is_same<T, Rationnel<int>>::value || std::is_same<T, Rationnel<double>>::value)
    {
        if (maxValeur.numerateur == 0) 
        { 
            throw std::runtime_error("Impossible de pivoter : pivot nul.");
        }
    } 
    else 
    {
        if (maxValeur == 0) 
        { 
            throw std::runtime_error("Impossible de pivoter : pivot nul.");
        }
    }
    // Échanger la ligne actuelle avec la ligne du pivot
    if (pivotIndex != colonne) {
        swap(valeurs[colonne], valeurs[pivotIndex]);
    }
}

// Méthode pour résoudre le système d'équations
template<typename T>
T* Matrice<T>::resoudre() {
    if (lignes + 1 != colonnes) {
        throw std::invalid_argument("La matrice doit être de taille n x (n+1) !");
    }

    // Étape 1: Transformation en forme triangulaire supérieure 
    for (int k = 0; k < lignes; k++) 
    {
        // Sélection du pivot
        pivoter(k); 
        for (int i = k + 1; i < lignes; i++) 
        {
            if (valeurs[k][k] == 0) {
                throw std::runtime_error("Impossible de résoudre : pivot nul.");
            }

            T facteur = valeurs[i][k] / valeurs[k][k];
            for (int j = k; j < colonnes; j++) 
            {
                valeurs[i][j] = valeurs[i][j] - facteur * valeurs[k][j];
            }
        }
    }

    // Étape 2: Substitution arrière pour obtenir les solutions
    T* solution = new T[lignes];
    for (int i = lignes - 1; i >= 0; i--) 
    {
        T somme = valeurs[i][colonnes - 1];
        for (int j = i + 1; j < lignes; j++) 
        {
            somme = somme - valeurs[i][j] * solution[j];
        }
        
        if (valeurs[i][i] == 0) {
            throw std::runtime_error("Impossible de résoudre : division par zéro.");
        }

        solution[i] = somme / valeurs[i][i];
    }

    return solution;
}


// Instanciation explicite 
template class Matrice<int>;
template class Matrice<double>;
template class Matrice<Rationnel<int> >;
