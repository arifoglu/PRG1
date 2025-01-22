#include <iostream>
#include <fstream>
#include "matrice.hpp" 

using namespace std;

template<typename T>
bool verifierSolution(const Matrice<T>& matrice, const T* solution, int lignes, int colonnes);

int main() {
    try {

        int n = 5; 

        ifstream fichier("equation5_5.txt");
        if (!fichier) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        Matrice<int> matrice(n, n + 1);
        matrice.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice lue :" << endl;
        matrice.afficherMatrice();

        int* solution = matrice.resoudre();
        cout << "Solution calculée :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        if (verifierSolution(matrice, solution, n, n + 1)) {
            cout << "La solution est valide." << endl;
        } else {
            cout << "La solution est incorrecte." << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

    return 0;
}

// verification 
template<typename T>
bool verifierSolution(const Matrice<T>& matrice, const T* solution, int lignes, int colonnes) {
    bool valide = true;
    for (int i = 0; i < lignes; i++) {
        T somme = 0;
        for (int j = 0; j < colonnes - 1; j++) {
            somme += matrice.getValeur(i, j) * solution[j];
        }
        if (somme != matrice.getValeur(i, colonnes - 1)) {
            cout << "Erreur : Ligne " << i + 1 << " n'est pas valide." << endl;
            cout << "Somme calculée : " << somme << ", b attendu : " << matrice.getValeur(i, colonnes - 1) << endl;
            valide = false;
        }
    }
    return valide;
}
