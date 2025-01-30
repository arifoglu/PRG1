/*
// Laboratoire  Laboratoire 23 
// Date:        16.01.2025
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo27.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

- Exercer la généricité; introduction à la résolution de systèmes d’équations; sensibilisation aux problèmes numériques
- Le programme pivote3_4.cpp permet, entre autres, de résoudre des systèmes linéaires de 3 équations à 3 inconnues. La taille du système est codée en dur
  et utilise un tableau natif à 2 dimensions dont les tailles sont fixées à la compilation.
- Modifier ce programme pour qu’il puisse résoudre des systèmes dont la taille est spécifiée par l’utilisateur
- Modifier la fonction de pivotage pour que les coefficients du systèmes soient d’un type numérique générique
- Remplacer les fonction d’impression par surcharge de l’opérateur <<
- Tester le programme en résolvant le système suivant, soit avec le type float soit avec le type double 
*/ 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include "matrice.hpp"
#include "rationnel.hpp"

using namespace std;

int main() {
    int n;
    try {
        cout << "Saisissez la taille de la matrice carrée (n x n+1) : ";
        cin >> n;

        if (n <= 0) {
            throw invalid_argument("La taille de la matrice doit être positive.");
        }

        // Création de la matrice
        Matrice<double> matrice(n, n+1);

        // Lecture et affichage de la matrice
        matrice.lireMatrice();
        matrice.afficherMatrice();

        // Résolution du système
        double* solution = matrice.resoudre();
        cout << "Solution :" << endl;
        for (int i = 0; i < n; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;
    } catch (const invalid_argument& e) {
        cout << "Erreur d'entrée : " << e.what() << endl;
    } catch (const runtime_error& e) {
        cout << "Erreur : " << e.what() << endl;
    } catch (...) {
        cout << "Erreur inconnue." << endl;
    }


    return 0;
}

/*

g++ -c matrice.cpp -std=c++20
g++ -c rationnel.cpp -std=c++20
g++ matrice.o rationnel.o arifoglu_labo23.cpp -o arifoglu_labo23.exe -std=c++20

using Rat = uint64_t;
using Rat = double;
using Rat = Rational<Int>;

debordement dikkate alinmali double da 
using Unsigned = uint64_t;// si unsigned fonctionne pas
solution 
1/1
1/1
1/1
1/1
verificaton 1/1
*/

//1)
/*
try {
        // Equation5_5.txt dosyasını aç
        ifstream fichier("equation7_7.txt");
        if (!fichier) {
            throw runtime_error("Impossible d'ouvrir le fichier equation5_5.txt");
        }

        // Matris boyutunu belirle
        const int lignes = 5;
        const int colonnes = 6;
        Matrice<double> matrice(lignes, colonnes);

        // Dosyadan verileri oku
        string ligne;
        int i = 0;
        while (getline(fichier, ligne) && i < lignes) {
            stringstream ss(ligne);
            for (int j = 0; j < colonnes; j++) {
                ss >> matrice(i, j);
            }
            i++;
        }

        fichier.close();

        // Matrisin başlangıç halini yazdır
        cout << "Matrice initiale :" << endl;
        matrice.afficherMatrice();

        // Matris çözümünü yap
        double* solution = matrice.resoudre();

        // Çözüm sonuçlarını yazdır
        cout << "Solution du système :" << endl;
        for (int i = 0; i < lignes; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;
    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
*/

//2)
/*
    try {
        // Matris oluşturma (float türü ile)
        Matrice<float> matrice(3, 4);

        // Test verileri ekleme
        matrice(0, 0) = 1.5f; matrice(0, 1) = 2.5f; matrice(0, 2) = 3.5f; matrice(0, 3) = 4.5f;
        matrice(1, 0) = 5.5f; matrice(1, 1) = 6.5f; matrice(1, 2) = 7.5f; matrice(1, 3) = 8.5f;
        matrice(2, 0) = 9.5f; matrice(2, 1) = 10.5f; matrice(2, 2) = 11.5f; matrice(2, 3) = 12.5f;

        // Matrisin yazdırılması
        cout << "Matrice initiale (float) :" << endl;
        cout << matrice;

        // Matris çözümü (örnek bir pivotlama testi)
        float* solution = matrice.resoudre();
        cout << "Solution (float) :" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }
*/

//3)
/*
try {
        // Matris oluşturma (Rationnel<int> türü ile)
        Matrice<Rationnel<int>> matrice(2, 3);

        // Test verileri ekleme
        matrice(0, 0) = Rationnel<int>(1, 2); // 1/2
        matrice(0, 1) = Rationnel<int>(3, 4); // 3/4
        matrice(0, 2) = Rationnel<int>(5, 6); // 5/6
        matrice(1, 0) = Rationnel<int>(7, 8); // 7/8
        matrice(1, 1) = Rationnel<int>(9, 10); // 9/10
        matrice(1, 2) = Rationnel<int>(11, 12); // 11/12

        // Matrisin yazdırılması
        cout << "Matrice initiale (Rationnel<int>) :" << endl;
        cout << matrice;

        // Matris çözümü
        Rationnel<int>* solution = matrice.resoudre();
        cout << "Solution (Rationnel<int>) :" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "x" << i + 1 << " = " << solution[i] << endl;
        }

        delete[] solution;

    } catch (const exception& e) {
        cerr << "Erreur : " << e.what() << endl;
    }

*/