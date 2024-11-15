#include "fonctions_sudoku.hpp"


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

void remplir_sudoku(const string & contenu, vector<vector<int>> & sudoku, size_t m, size_t n){
    //Nous allons utliser stringstream pour tenir des strings
    stringstream ss(contenu);
    string line;
    int value;

    size_t ligne = 0;
    
    sudoku.resize(m * n, vector<int>(m * n, 0));

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

void afficher_sudoku(const vector<vector<int>> & sudoku, size_t m, size_t n){
    for (size_t i = 0; i < m * n; i++) 
    {
        for (size_t j = 0; j < m * n; j++) 
        {
            // si le valeur est 0
            if (sudoku[i][j] == 0) 
            {
                cout << "0 ";
            } 
            // si le valeur existe
            else 
            {
                cout << sudoku[i][j] << " ";
            }
        }
        cout << endl;
    }
}