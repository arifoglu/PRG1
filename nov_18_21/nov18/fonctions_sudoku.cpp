#include "fonctions_sudoku.hpp"

//lire fichier
string lire_fichier(const string & nom_fichier,size_t & m,size_t & n){
    //Pour la lecture à partir d'un fichier
    ifstream fichier(nom_fichier);
    //Verifier si le fichier est ouvert
    if(!fichier){
        cerr << "Le fichier n'a pas pu ouvrir. ";
        return ""; 
    }
    //determiner les variables pour mettre les données 
    string line, contenu; 

    //prendre des dimensions d'un fichier
    //prendre la première ligne et régler m et n
    if(getline(fichier,line)){
        stringstream ss(line);
        ss >> m >> n;
    }
    //verifier les valeurs des dimensions
    if (m == 0 || n == 0) {
        cerr << "Les dimensions de la grille ne sont pas valides." << endl;
        return "";
    }

    //Lire le fichier (line) et sauvegarde (contenu) en tant que string
    while(getline(fichier,line)){
        contenu += line + "\n";
    }
    fichier.close();
    
    return contenu;
}

//remplir_sudoku
void remplir_sudoku(const string & contenu, vector<vector<int>> & sudoku, size_t m, size_t n){
    //Nous allons utliser stringstream pour tenir des strings
    stringstream ss(contenu);
    string line;
    int value;

    size_t ligne = 0;
    
    //lire la ligne
    while(getline(ss,line)){
        stringstream ligne_stream(line);
        size_t col = 0;
    
            //lire chaque ligne et mettre au sudoku
            while(ligne_stream >> value){
                sudoku[ligne][col] = value;
                col++;
            }
            ligne++;
    }
}

//afficher sudoku
void afficher_sudoku(const vector<vector<int>> & sudoku, const vector<vector<vector<int>>> & valid_values) {
    for (size_t i = 0; i < sudoku.size(); ++i) 
    {
        for (size_t j = 0; j < sudoku[i].size(); ++j) 
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

//creer sudoku
vector<vector<int>> creer_sudoku(size_t sudoku_size){
    return vector<vector<int>>(sudoku_size, vector<int>(sudoku_size, 0));
}
//pour mettre des donnees ,manipuler des tableaux multidimensionnels
vector<vector<vector<int>> > initialiser_valid_values(size_t sudoku_size, size_t m, size_t n) {
    
    vector<vector<vector<int>> > valid_values(sudoku_size, vector<vector<int>>(sudoku_size));

    for (size_t i = 0; i < sudoku_size; ++i) {
        for (size_t j = 0; j < sudoku_size; ++j) {
            // les valeurs 
            for (int k = 1; k <= sudoku_size; ++k) {
                valid_values[i][j].push_back(k);
            }
        }
    }
    return valid_values;
}

////////des stratégies simples de complétion d’une grille de sudoku
//
void update_row(vector<vector<vector<int>>>& valid_values, size_t row, int value) {
    for (size_t col = 0; col < valid_values.size(); ++col) 
    {
        auto &cell_values = valid_values[row][col];
        cell_values.erase(remove(cell_values.begin(), cell_values.end(), value), cell_values.end());
    }
}
//
void update_column(vector<vector<vector<int>>>& valid_values, size_t col, int value) {
    for (size_t row = 0; row < valid_values.size(); ++row)
     {
        auto &cell_values = valid_values[row][col];
        cell_values.erase(remove(cell_values.begin(), cell_values.end(), value), cell_values.end());
     }
}
//
void update_block(vector<vector<vector<int>>>& valid_values, size_t row, size_t col, int value, size_t m) {
    size_t start_row = (row / m) * m;
    size_t start_col = (col / m) * m;

    for (size_t r = start_row; r < start_row + m; ++r) 
    {
        for (size_t c = start_col; c < start_col + m; ++c) 
        {
            auto &cell_values = valid_values[r][c];
            cell_values.erase(remove(cell_values.begin(), cell_values.end(), value), cell_values.end());
        }
    }
}
//
int count_possibilities_row(const vector<vector<vector<int>>>& valid_values, size_t row, int value) {
    int count = 0;

    for (size_t col = 0; col < valid_values.size(); ++col) 
    {
        if (find(valid_values[row][col].begin(), valid_values[row][col].end(), value) != valid_values[row][col].end()) 
        {
            ++count;
        }
    }
    return count;
}
//
int count_possibilities_column(const vector<vector<vector<int>>>& valid_values, size_t col, int value) {
    int count = 0;

    for (size_t row = 0; row < valid_values.size(); ++row) 
    {
        if (find(valid_values[row][col].begin(), valid_values[row][col].end(), value) != valid_values[row][col].end())
        {
            ++count;
        }
    }
    return count;
}
//
int count_possibilities_block(const vector<vector<vector<int>>>& valid_values, size_t row, size_t col, int value, size_t m) {

    int count = 0;
    size_t start_row = (row / m) * m;
    size_t start_col = (col / m) * m;

    for (size_t r = start_row; r < start_row + m; ++r) 
    {
        for (size_t c = start_col; c < start_col + m; ++c) 
        {
            if (find(valid_values[r][c].begin(), valid_values[r][c].end(), value) != valid_values[r][c].end()) 
            {
                ++count;
            }
        }
    }
    return count;
}
//
void update_cellule(vector<vector<int>>& sudoku, vector<vector<vector<int>>>& valid_values, size_t row, size_t col, int value, size_t m) {
    sudoku[row][col] = value;
    
    update_row(valid_values, row, value);
    update_column(valid_values, col, value);
    update_block(valid_values, row, col, value, m);
}
