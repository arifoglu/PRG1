#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "matrice.hpp"
#include "rationnel.hpp"
#include "Int.hpp"
#include "Setbase.hpp"
#include "unsigned.hpp"
using namespace std;


int main() {
    try {
        ifstream fichier("equation5_5.txt");
        if (!fichier) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5; 
        Matrice<int> A(n, n + 1);

        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice initiale :" << endl;
        A.afficherMatrice();

        for (int i = 0; i < n; i++) {
            cout << "Pivotage pour la colonne " << i + 1 << " :" << endl;
            A.pivoter(i);
            A.afficherMatrice(); 
        }

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}