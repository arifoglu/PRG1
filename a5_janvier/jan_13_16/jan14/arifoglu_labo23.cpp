/*
// Laboratoire  Laboratoire 23 
// Date:        16.01.2025
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo27.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

- Exercer la généricité; introduction à la résolution de systèmes d’équations; sensibilisation aux problèmes numériques
- Le programme pivote3_4.cpp permet, entre autres, de résoudre des systèmes linéaires de 3 équations à 3 inconnues. La taille du système est codée en dur
  et utilise un tableau natif à 2 dimensions dont les tailles sont fixées à la compilation.
- Modifier ce programme pour qu’il puisse résoudre des systèmes dont la taille est spécifiée par l’utilisateur
- Modifier la fonction de pivotage pour que les coefficients du systèmes soient d’un type numérique générique
- Remplacer les fonction d’impression par surcharge de l’opérateur <<
- Tester le programme en résolvant le système suivant, soit avec le type float soit avec le type double 
*/ 
#include <iostream>
#include <cstdlib>
#include "matrice.hpp"
using namespace std;

int main(){
    int n;

    try {
        cout << "Saisissez la taille de la matrice carrée (n x n+1) : ";
        cin >> n;

        if (n <= 0) {
            throw invalid_argument("La taille de la matrice doit être positive.");
        }

        // Création de la matrice
        Matrice<double> matrice(n, n+1);

        // Lecture et affichage de la matrice
        matrice.lireMatrice();
        matrice.afficherMatrice();

        // Résolution du système
        double* solution = matrice.resoudre();
        cout << "Solution :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;
    } catch (const invalid_argument& e) {
        cout << "Erreur d'entrée : " << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << "Erreur : " << e.what() << endl;
    } catch (...) {
        cout << "Erreur inconnue." << endl;
    }
  
  return EXIT_SUCCESS;
}
/*

g++ -c matrice.cpp -std=c++20
g++ -c rationnel.cpp -std=c++20
g++ matrice.o rationnel.o arifoglu_labo23.cpp -o arifoglu_labo23.exe -std=c++20
*/