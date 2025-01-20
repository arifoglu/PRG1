#include <iostream>
#include <fstream>
#include "matrice.hpp"

using namespace std;

int main() {
    try {
        // Ouvrir le fichier contenant la matrice
        ifstream fichier("equation5_5.txt");

        if (!fichier.is_open()) {
            cerr << "Erreur : Impossible d'ouvrir le fichier !" << endl;
            return 1;
        }

        // Initialiser une matrice de taille n x (n+1)
        int n = 5; 
        Matrice<int> A(n, n + 1);

        // Lire les données du fichier dans la matrice
        A.lireMatrice(fichier);
        fichier.close();

        // Afficher la matrice avant le pivotage
        cout << "Matrice avant pivotage :" << endl;
        A.afficherMatrice();

        // Effectuer le pivotage sur la première colonne
        A.pivoter(0);

        // Afficher la matrice après le pivotage
        cout << "Matrice après pivotage :" << endl;
        A.afficherMatrice();

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}
