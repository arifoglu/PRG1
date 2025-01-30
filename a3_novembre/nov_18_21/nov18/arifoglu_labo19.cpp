// Laboratoire  Laboratoire 19
// Date:        18.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo19.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
Le but :Manipuler des tableaux multidimensionnels
- Implanter des stratégie simples de complétion d’une grille de sudoku
Associer à un sukoku m ×n une matrice carrée mn ×mn dont les éléments [i][j]sont des objets permettant de savoir quelles sont les valeurs qui peuvent être placées dans la case [i][j] de la grille du sudoku (et quelles sont les valeurs qui ont pu être éliminées)
- Étant donné une case [i][j] ne pouvant prendre qu’une seule valeur v , écrire 3 fonctions pour mettre à jour les autres objets se trouvant dans la ligne i , dans la colonne j ou dans le bloc contenant la case [i][j] (on devra éliminer v de ces objets)
- En parcourant systématiquement toutes les cases et en effectuant au besoin les mises à jour des objets, on peut éventuellement déterminer la valeur de nouvelles cases
- Étant donnée une valeur v , écrire 3 fonctions permettant de déterminer le nombre de positions où l’on peut placer v dans une ligne donnée, dans une colonne donnée ou dans un bloc donné
- Si une de ces fonctions nous indique une position unique, on peut déterminer la valeur d’une nouvelle case Tant qu’on arrive à déterminer la valeur d’au moins une nouvelle case, répéter ces actions
- Imprimer la grille (partiellement) complétée ainsi que le nombre de possibilités restantes pour chaque case (une case avec 0 possibilité indique une impossibilité de compléter le sudoku)

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
    vector<vector<int>> sudoku = creer_sudoku(sudoku_size);

    //pour les valeurs possibles
    vector<vector<vector<int>> > valid_values = initialiser_valid_values(sudoku_size,m,n);
    
    //remplir sudoku
    remplir_sudoku(str,sudoku,m,n);

    //affichage sudoku
    afficher_sudoku(sudoku,valid_values);

    return EXIT_SUCCESS;
}




