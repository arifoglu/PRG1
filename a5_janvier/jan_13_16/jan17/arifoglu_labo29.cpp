/*
  Laboratoire  Laboratoire 29 Résolution de systèmes d’équations linéaires
  Date:        18.01.2025
  Author:      Abdulkadir Arifoglu
  File:        arifoglu_labo29.cpp
  Compiler:    clang version 16.0.0
  Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

Exercer l’utilisation d’exceptions
- Adapter les laboratoires 23 (pivotage), 26 (entiers non limités) et 27(nombres rationnels) pour permettre la résolution exacte de systèmes
  d’équations linéaires. Le programme mis au point devra satisfaire les spécifications suivantes :
- Un système d’équations Ax= b sera fourni par un fichier contenant une matrice n ×(n + 1), les n premières colonnes contenant les coefficients de A et la
  dernière ceux de b
- Il faudra concevoir une fonction générique prenant A et b en paramètres et retournant le vecteur x d’une solution, s’il en existe une
- La fonction devra automatiquement pivoter sur chacun des éléments de la diagonale de A ; parmi les éléments sur lesquels il faut encore pivoter, on
  choisira celui dont la valeur absolue est la plus grande (on rappelle que l’on ne peut pas pivoter sur 0)
- Traiter les cas problématique en utilisant les exceptions à bon escient
- Si tout se passe bien, afficher x à l’écran
*/
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

int main() {
try {
    ifstream fichier("equation5_5.txt");
    if (!fichier.is_open()) {
        throw std::runtime_error("Erreur : Impossible d'ouvrir le fichier !");
    }

    int n = 5;
    Matrice<int> A(n, n + 1);
    A.lireMatrice(fichier);
    fichier.close();

    std::cout << "Matrice initiale :" << std::endl;
    A.afficherMatrice();

    for (int i = 0; i < n; i++) {
        std::cout << "Avant pivotage pour colonne " << i + 1 << " :" << std::endl;
        A.afficherMatrice();
        A.pivoter(i);
        std::cout << "Après pivotage pour colonne " << i + 1 << " :" << std::endl;
        A.afficherMatrice();
    }
} catch (const std::exception& e) {
    std::cerr << "Erreur : " << e.what() << std::endl;
}

    return 0;
}

/*
g++ -c unsigned.cpp -std=c++20
g++ -c Setbase.cpp -std=c++20
g++ -c Int.cpp -std=c++20
g++ -c rationnel.cpp -std=c++20
g++ -c matrice.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
*/









//1)lire fichier
/*
  try {
        ifstream fichier("equation5_5.txt");
        fichier.exceptions(ifstream::failbit | ifstream::badbit);

        string ligne;
        while (true) {
            try {
                // Lire une ligne du fichier
                getline(fichier, ligne);
                // Vérifier la fin du fichier
                if (fichier.eof()) break; 
                cout << ligne << endl;
            } catch (const ifstream::failure& e) {
                // Ignorer les exceptions EOF
                if (fichier.eof()) break; 
                // Relancer d'autres exceptions
                throw; 
            }
        }
        // Fermer le fichier après lecture
        fichier.close();
    } catch (const ifstream::failure& e) {
        cerr << "Erreur : Exception attrapée pendant la lecture du fichier !" << endl;
        cerr << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Erreur générale : " << e.what() << endl;
    
}

*/

//2)lire fichier
/*
try {
    // Ouvrir le fichier
    ifstream fichier("/Users/arifoglu/ICT/heig_2024/PRG1/jan_13_16/jan17/equation5_5.txt");

    if (!fichier) {
        throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
    }

    // Créer et remplir une matrice
    vector<vector<int>> matrice;
    string line;

    // Lire les lignes du fichier
    while (getline(fichier, line)) {
        vector<int> row;
        istringstream ss(line);
        int value;
        while (ss >> value) {
            row.push_back(value);
        }
        matrice.push_back(row);
    }

    fichier.close();

    // Vérifier et afficher la matrice
    cout << "Matrice lue :" << endl;
    for (const auto& row : matrice) {
        for (const auto& val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

} catch (const exception& e) {
    cerr << "Erreur : " << e.what() << endl;
}

*/

//3)pivotage
/*
    try {
        // Création d'une matrice de test
        // Matrice de taille 3x4
        Matrice<int> A(3, 4); 
        A.setValeur(0, 0, 2);
        A.setValeur(0, 1, -3);
        A.setValeur(0, 2, 4);
        A.setValeur(0, 3, 8);
        A.setValeur(1, 0, 5);
        A.setValeur(1, 1, -10);
        A.setValeur(1, 2, 2);
        A.setValeur(1, 3, 3);
        A.setValeur(2, 0, 1);
        A.setValeur(2, 1, 3);
        A.setValeur(2, 2, 6);
        A.setValeur(2, 3, 9);

        // Affiche la matrice avant le pivotage
        cout << "Matrice avant pivotage :" << endl;
        A.afficherMatrice();

        // Effectue le pivotage sur la première colonne
        A.pivoter(0);

        // Affiche la matrice après le pivotage
        cout << "Matrice après pivotage :" << endl;
        A.afficherMatrice();

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

*/

//4)Résolution du système
/*
   try {
        ifstream fichier("/Users/arifoglu/ICT/heig_2024/PRG1/jan_13_16/jan17/equation5_5.txt");

        if (!fichier) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5; 
        Matrice<int> A(n, n + 1);
        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice lue :" << endl;
        A.afficherMatrice();

        int* solution = A.resoudre();
        cout << "Solution :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        // Vérification de la solution
        if (verifierSolution(A, solution, n, n + 1)) {
            cout << "La solution est correcte." << endl;
        } else {
            cout << "La solution est incorrecte." << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
*/
/*
try {
        ifstream fichier("/Users/arifoglu/ICT/heig_2024/PRG1/jan_13_16/jan17/equation8_8.txt");

        if (!fichier.is_open()) {
            throw runtime_error("Erreur : Impossible d'ouvrir le fichier !");
        }

        int n = 5; 
        Matrice<int> A(n, n + 1);
        A.lireMatrice(fichier);
        fichier.close();

        cout << "Matrice lue :" << endl;
        A.afficherMatrice();

        int* solution = A.resoudre();
        if (solution != nullptr) {
            cout << "Solution :" << endl;
            for (int i = 0; i < n; i++) {
                cout << "x" << i + 1 << " = " << solution[i] << endl;
            }
            delete[] solution;
        }

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

*/

//5)plus grand pivotage

//6)exception handling

//7)afficher ecran