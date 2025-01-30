#include "test_unsigned.hpp"
#include "matrice.hpp"
#include "unsigned.hpp"
#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

// Fonction pour tester les grands entiers (Unsigned) avec un fichier donné
void testUnsigned(const string& filePath) {
    try {
        // Ouvrir le fichier
        ifstream fichier(filePath);
        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        // Déterminer la taille de la matrice
        int n = 5; // Taille fixe pour equation5_5.txt
        Matrice<Unsigned> A(n, n + 1);

        // Lire la matrice
        A.lireMatrice(fichier);
        fichier.close();

        // Afficher la matrice
        cout << "Matrice lue :" << endl;
        A.afficherMatrice();

        // Résolution du système
        Unsigned* solution = A.resoudre();

        // Afficher la solution
        cout << "Solution du système :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
}
