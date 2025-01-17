#include "matrice.hpp"
#include <cmath>
#include <fstream>


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

// Lecture de la matrice depuis un fichier
template <typename T>
void Matrice<T>::lireMatrice(ifstream& fichier) {
    for (int i = 0; i < lignes; ++i) {
        for (int j = 0; j < colonnes; ++j) {
            fichier >> valeurs[i][j];
            if (fichier.fail()) {
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
template<typename T>
T* Matrice<T>::resoudre() {
    if (lignes + 1 != colonnes) {
        throw invalid_argument("La matrice doit être de taille n x (n+1) !");
    }

    // Étape 1 
    for (int k = 0; k < lignes; k++) {
        pivoter(k);

        for (int i = k + 1; i < lignes; i++) {
            if (valeurs[k][k] == 0) {
                throw runtime_error("Impossible de résoudre : pivot nul.");
            }

            T facteur = valeurs[i][k] / valeurs[k][k];
            for (int j = k; j < colonnes; j++) {
                valeurs[i][j] -= facteur * valeurs[k][j];
            }
        }
    }

    // Contrôle de cohérence et vérification des solutions
    for (int i = 0; i < lignes; i++) {
        bool allZero = true;
        for (int j = 0; j < colonnes - 1; j++) {
            if (valeurs[i][j] != 0) {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            if (valeurs[i][colonnes - 1] != 0) {
                throw runtime_error("Système incohérent : aucune solution.");
            } else {
                cout << "Attention : Le système peut avoir des solutions infinies." << endl;
                return nullptr;
            }
        }
    }

    // Étape 2 : Substitution arrière
    T* solution = new T[lignes];
    for (int i = lignes - 1; i >= 0; i--) {
        T somme = valeurs[i][colonnes - 1];
        for (int j = i + 1; j < lignes; j++) {
            somme -= valeurs[i][j] * solution[j];
        }

        if (valeurs[i][i] == 0) {
            throw runtime_error("Impossible de résoudre : division par zéro.");
        }

        solution[i] = somme / valeurs[i][i];
    }

    return solution;
}

/*
// Résolution du système d'équations
template<typename T>
T* Matrice<T>::resoudre() {
    if (lignes + 1 != colonnes) {
        throw invalid_argument("La matrice doit être de taille n x (n+1) !");
    }

    // Étape 1 : Triangularisation
    for (int k = 0; k < lignes; k++) {
        pivoter(k);

        for (int i = k + 1; i < lignes; i++) {
            if (valeurs[k][k] == 0) {
                throw runtime_error("Impossible de résoudre : pivot nul.");
            }

            T facteur = valeurs[i][k] / valeurs[k][k];
            for (int j = k; j < colonnes; j++) {
                valeurs[i][j] -= facteur * valeurs[k][j];
            }
        }
    }

    // Étape 2 : Substitution arrière
    T* solution = new T[lignes];
    for (int i = lignes - 1; i >= 0; i--) {
        T somme = valeurs[i][colonnes - 1];
        for (int j = i + 1; j < lignes; j++) {
            somme -= valeurs[i][j] * solution[j];
        }

        if (valeurs[i][i] == 0) {
            throw runtime_error("Impossible de résoudre : division par zéro.");
        }

        solution[i] = somme / valeurs[i][i];
    }

    return solution;
}
*/
/*
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
*/

// Instanciation explicite 
template class Matrice<int>;
template class Matrice<double>;
template class Matrice<Rationnel<int> >;
