/*
  Laboratoire  Laboratoire 29 Résolution de systèmes d’équations linéaires
  Date:        23.01.2025
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
#include <string>
#include "matrice.hpp"
#include "rationnel.hpp"
#include "Int.hpp"
#include "Setbase.hpp"
#include "unsigned.hpp"
#include "test_lire.hpp"
#include "test_pivotage.hpp"
#include "test_resoudre.hpp"
#include "verifierSolution.hpp"
#include "test_unsigned.hpp"
#include "testermatrice.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    // Test 1
    
     if (argc < 2) {
        cerr << "Erreur : veuillez spécifier un test à exécuter." << endl;
        cerr << "Usage : ./arifoglu_labo29.exe <test_name> [file_path]" << endl;
        cerr << "Tests disponibles : lire, pivotage, resoudre, unsigned_test,rationnel_test" << endl;
        return 1;
    }

    string testName = argv[1];

    if (testName == "lire") {
        if (argc < 3) {
            cerr << "Erreur : veuillez spécifier un chemin de fichier pour le test lire." << endl;
            return 1;
        }
        string filePath = argv[2];
       
        testLireFichier(filePath);
    } else if (testName == "pivotage") {
        testPivotage();
    } else if (testName == "resoudre") { 
        if (argc < 3) {
            cerr << "Erreur : veuillez spécifier un chemin de fichier pour le test resoudre." << endl;
            return 1;
        }
        string filePath = argv[2];
        testResoudre(filePath);
    } else if (testName == "unsigned_test") {
        if (argc < 3) {
            cerr << "Erreur : veuillez spécifier un chemin de fichier pour le test unsigned." << endl;
            return 1;
        }
        string filePath = argv[2];
        testUnsigned(filePath);
    } else {
        cerr << "Erreur : test inconnu." << endl;
        cerr << "Tests disponibles : lire, pivotage, resoudre, unsigned_test,rationnel_test" << endl;
        return 1;
    }
    

   // Test 2 
   /*
   
    if (argc < 2) {
        cerr << "Erreur : veuillez spécifier un fichier à tester." << endl;
        cerr << "Usage : ./arifoglu_labo29.exe <file_path>" << endl;
        return 1;
    }

    string filePath = argv[1];

    cout << "\n--- Test avec uint64_t ---" << endl;
    testerMatrice<uint64_t>(filePath);

    cout << "\n--- Test avec double ---" << endl;
    testerMatrice<double>(filePath);

    cout << "\n--- Test avec Rationnel<int> ---" << endl;
    testerMatrice<Rationnel<int>>(filePath);

    */
   
    return 0;
}

/* 
// Compile codes 
g++ -c unsigned.cpp -std=c++20
g++ -c Setbase.cpp -std=c++20
g++ -c Int.cpp -std=c++20
g++ -c rationnel.cpp -std=c++20
g++ -c matrice.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
Note:
La derniere code(ligne 112) est utilisé uniquement pour la compilation.Il ne fonctionnera pas
directement avec le fichier principal tant que les tests ne sont pas spécifiés
correctement.Pour les codes de test, les commandes suivantes doivent être exécutées.

///////////////////////////////////// Testing Codes////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////
// Test 1 Utilisation

1) Pour testing lire fichier => appliquez les codes suivants respectivement

g++ -c test_lire.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe lire 

2) Pour testing pivotages => appliquez les codes suivants respectivement

g++ -c test_pivotage.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe pivotage

3) Pour testing resoudre => appliquez les codes suivants respectivement

g++ -c verifierSolution.hpp -std=c++20
g++ -c test_resoudre.cpp -std=c++20 
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe resoudre 


4) Pour testing Unsigned => appliquez les codes suivants respectivement
g++ -c test_unsigned.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe unsigned_test 

5) Pour testing Rational => appliquez les codes suivants respectivement
g++ -c test_rationnel.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o test_rationnel.o
arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe rationnel_test

**Les solutions de système

- equation5_5.txt Solution du système : 
                                        x1 = 1 
                                        x2 = 1 
                                        x3 = 1 
                                        x4 = 1 
                                        x5 = 1

- equation6_6.txt Solution du système : 
                                        x1 = 4.35277 
                                        x2 = -3.5555
                                        x3 = -3.61718 
                                        x4 = -1.1448 
                                        x5 =4.57891

- equation7_7.txt Solution du système :
                                        x1 = 4.15296e+14
                                        x2 = -1.86471e+15
                                        x3 = 3.11335e+15
                                        x4 = -8.58096e+14
                                        x5 = 2.75031e+12

- equation8_8.txt Solution du systeme :
                                        x1 = -2.73662e+15
                                        x2 = 1.18587e+16
                                        x3 = -4.46981e+16
                                        x4 = 4.78908e+16
                                        x5 = -1.36831e+15

// Test 2 Utilisation
Appliquez les codes suivants respectivement

g++ -c testermatrice.cpp  -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o testermatrice.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20

*/





