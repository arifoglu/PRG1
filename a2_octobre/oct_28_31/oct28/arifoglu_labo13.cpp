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
- la solution appartient à M.Taillard                    
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void separation(const string & gauche,const string & horizontal,const string & fine,const string & epaisse,const string & droit,int largeur,int m,int n);

void imprime_grille(int m, int n);

int main(){
  cout << "Impression d'une grille de sudoku m x n; donner m et n: ";
  int m, n;
  cin >> m >> n;
  imprime_grille(m, n);

  return EXIT_SUCCESS;
}

// separer
void separation(const string & gauche, const string & horizontal, 
                const string & fine, const string & epaisse, 
                const string & droit, int largeur, int m, int n) {
  for (int j = 0; j < n*m; ++j) {
    if (j == 0)
      cout << gauche;
    else if (j % n == 0)
      cout << epaisse;
    else
      cout << fine;
    for (int k = 0; k <= largeur + 1; ++k)
      cout << horizontal;
  }
  cout << droit << endl;
}
// imprimer
void imprime_grille(int m, int n) {
  int taille = n*m, largeur = 1;
  
  while ((taille /= 10) > 0) 
    ++largeur;
    
  for (int i = 0; i < m*n; ++i) {
    if (i == 0)
      separation("┏","━","┯","┳","┓", largeur, m, n); 
    else if (i % m == 0)
      separation("┣","━","┿","╋","┫", largeur, m, n); 
    else
      separation("┠","─","┼","╂","┨", largeur, m, n); 

    for (int j = 0; j < m*n; ++j) {
      if (j % n == 0)
        cout << "┃ ";
      else
        cout << "│ ";
      cout << setw(largeur) << (i/m + i*n + j)%(m*n) +1 << ' ';
    }
    cout << "┃\n";
  }
  separation("┗","━","┷","┻","┛", largeur, m, n); 
}

