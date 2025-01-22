#include "test_pivotage.hpp"
#include "matrice.hpp"
#include <iostream>
#include <fstream>

using namespace std;

void testPivotage() {
    try {
        // Lire la matrice à partir d'un fichier
        ifstream fichier("equation5_5.txt");
        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        // Création de la matrice
        int n = 5; // Taille déterminée à partir du fichier
        Matrice<int> A(n, n + 1);
        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice avant pivotage :" << endl;
        A.afficherMatrice();

        // Pivotage sur chaque colonne
        for (int i = 0; i < n; i++) {
            cout << "Pivotage pour colonne " << i + 1 << " :" << endl;
            A.pivoter(i);
            A.afficherMatrice();
        }
    } catch (const exception& e) {
        cerr << "Erreur pendant le pivotage : " << e.what() << endl;
    }
}
