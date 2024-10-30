// abdulkadir arifoglu 28.10.2024 Laboratoire 13
/*
- Affichage d'une grille de Sudoku
- Un sudoku m ×n est une grille constituée de la superposition de n × m blocs rectangulaires de taille m × n. 
- Chaque bloc comporte tous les nombres de 1 à m·n.
- Chaque ligne et chaque colonne de la grille doit également comporter une, et une seule fois chaque nombre de 1 à m·n. 
- Le but est écrire un programme qui demande les valeurs m et n à l’utilisateur et imprime une grille remplie selon ces règles.
                    ┏━━━┯━━━┯━━━┳━━━┯━━━┯━━━┓
                    ┃ 1 │ 2 │ 3 ┃ 4 │ 5 │ 6 ┃
                    ┠───┼───┼───╂───┼───┼───┨
                    ┃ 4 │ 5 │ 6 ┃ 1 │ 2 │ 3 ┃
                    ┣━━━┿━━━┿━━━╋━━━┿━━━┿━━━┫
                    ┃ 2 │ 3 │ 4 ┃ 5 │ 6 │ 1 ┃
                    ┠───┼───┼───╂───┼───┼───┨
                    ┃ 5 │ 6 │ 1 ┃ 2 │ 3 │ 4 ┃
                    ┣━━━┿━━━┿━━━╋━━━┿━━━┿━━━┫
                    ┃ 3 │ 4 │ 5 ┃ 6 │ 1 │ 2 ┃
                    ┠───┼───┼───╂───┼───┼───┨
                    ┃ 6 │ 1 │ 2 ┃ 3 │ 4 │ 5 ┃
                    ┗━━━┷━━━┷━━━┻━━━┷━━━┷━━━┛  
*/

#include <iostream>
#include <cstdlib>
using namespace std;

//void sudoku(int m,int n);

int main(){
    //int x,y;
    //cout << "Saisissez deux nombres pour grille de Sudoku : \n";
    //cin >> x >> y;
    //sudoku(x,y);

    // pour faire un test
    int n = 4;
    int m = 4;
    // en haut 
    cout << "┏"; 
    for(int i = 0;i < n;++i){
        cout<<"━━━";
        if(i < n - 1){
            cout << "┯";
        }
    }
    cout << "┓" << endl;

    // Remplissage et affichage de la grille
    for (int i = 0; i < m; ++i) {
        cout << "┃";
        for (int j = 0; j < n; ++j) {
            cout << " " << (i * n + j) << " ┃"; 
        }
        cout << endl;
        if (i < m - 1) {
            cout << "┠";
            for (int j = 0; j < n; ++j) {
                cout << "───";
                // Séparateur entre les colonnes
                if (j < n - 1) {
                    cout << "╂"; 
                }
            }
            cout << "┨" << endl;
        }
    }
    //// en bas
        cout << "┗"; 
    for(int i = 0;i < n;++i){
        cout<<"━━━";
        if(i < n - 1){
            cout << "┷";
        }
    }
    cout << "┛" << endl;
    
    return EXIT_SUCCESS;
}

