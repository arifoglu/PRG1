#include "test_resoudre.hpp"
#include "verifierSolution.hpp"
#include "matrice.hpp"
#include <iostream>
#include <fstream>
#include <exception>

using namespace std;

void testResoudre(const string& filePath) {
    try {
        // Ouvrir le fichier contenant la matrice
        ifstream fichier(filePath);
        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        // Déterminer la taille de la matrice à partir du fichier
        int n = 5; // Taille connue pour le fichier de test
        Matrice<int> A(n, n + 1);

        // Lire la matrice
        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice lue :" << endl;
        A.afficherMatrice();

        // Résolution du système
        int* solution = A.resoudre();

        // Afficher la solution
        cout << "Solution du système :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        // Vérification de la solution
        if (verifierSolution(A, solution, n, n + 1)) {
            cout << "La solution est correcte." << endl;
        } else {
            cout << "La solution est incorrecte." << endl;
        }

        // Libérer la mémoire allouée
        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
}

