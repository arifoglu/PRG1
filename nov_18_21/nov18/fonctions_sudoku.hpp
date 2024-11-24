#ifndef FONCTIONS_SUDOKU_HPP
#define FONCTIONS_SUDOKU_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include "fonctions_sudoku.hpp"
using namespace std;

string lire_fichier(const string & nom_fichier,size_t & m,size_t & n);
void remplir_sudoku(const string & contenu, vector<vector<int>> & sudoku, size_t m, size_t n);
void afficher_sudoku(const vector<vector<int>> & sudoku, const vector<vector<vector<int>>> & valid_values);
vector<vector<int>> creer_sudoku(size_t sudoku_size);
vector<vector<vector<int>>> initialiser_valid_values(size_t sudoku_size, size_t m, size_t n);

#endif