#ifndef FONCTIONS_SUDOKU_HPP
#define FONCTIONS_SUDOKU_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "fonctions_sudoku.hpp"
using namespace std;

string lire_fichier(const string & nom_fichier,size_t & m,size_t & n);
void remplir_sudoku(const string & contenu, vector<vector<int>> & sudoku, size_t m, size_t n);
void afficher_sudoku(const vector<vector<int>> & sudoku, size_t m, size_t n);

#endif