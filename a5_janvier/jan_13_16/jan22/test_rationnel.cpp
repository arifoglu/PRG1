#include <iostream>
#include <fstream>
#include "matrice.hpp"
#include "rationnel.hpp"
#include "Int.hpp"
#include "verifierSolution.hpp"

using namespace std;

void testRationnel(const string& filePath) {
    try {
        ifstream fichier(filePath);
        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5;
        Matrice<Rationnel<Int>> A(n, n + 1);

        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice lue :" << endl;
        A.afficherMatrice();

        Rationnel<Int>* solution = A.resoudre();

        cout << "Solution du système :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        if (verifierSolution(A, solution, n, n + 1)) {
            cout << "La solution est correcte." << endl;
        } else {
            cout << "La solution est incorrecte." << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
}
