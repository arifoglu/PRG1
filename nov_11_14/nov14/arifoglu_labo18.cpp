// Laboratoire  Laboratoire 18 (Tableaux multidimensionnels)
// Date:        14.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo18.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Écrire une fonction permettant l’impression d’une grille de sudoku partiellement remplie
- La fonction reçoit en paramètre les valeurs m et n spécifiant la taille des blocs de la grille ainsi qu’un tableau carré de mn ×mn éléments avec des valeurs comprises entre 0 et mn
- Une valeur nulle indique que la case correspondante n’est pas remplie
- Le programme reçoit en paramètre le nom d’un fichier contenant les données d’une grille partiellement remplie et affiche cette dernière proprement dans la console
*/
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "fonctions_sudoku.hpp"
using namespace std;

int main() {
    string nom_fichier;
    cout << "Entrez le nom du fichier source (Ex : sudoku.txt) : ";
    cin >> nom_fichier;
    //pour les dimensions du sudoku 
    size_t m =0 , n = 0;

    //lire les donnes du sudoku d'un fichier
    string str = lire_fichier(nom_fichier,m,n);
    cout << "Dimensions de la grille : " << m << "x" << n << endl;
    
    //determiner la taille du sudoku
    size_t sudoku_size = m * n;

    //créer le vector sudoku
    vector<vector<int>> sudoku(sudoku_size, vector<int>(sudoku_size,0));

    //remplir sudoku
    remplir_sudoku(str,sudoku,m,n);

    //affichage sudoku
    afficher_sudoku(sudoku,m,n);

    return EXIT_SUCCESS;
}






