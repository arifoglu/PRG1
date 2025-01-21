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

using namespace std;

int main(int argc, char* argv[]) {
     if (argc < 2) {
        cerr << "Erreur : veuillez spécifier un test à exécuter." << endl;
        cerr << "Usage : ./arifoglu_labo29.exe <test_name> [file_path]" << endl;
        cerr << "Tests disponibles : lire, pivotage, resoudre, unsigned_test" << endl;
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
        cerr << "Tests disponibles : lire, pivotage, resoudre, unsigned_test" << endl;
        return 1;
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

///////////////////////////////////// Testing Codes////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////

1) Pour testing lire fichier => appliquez les codes suivants respectivements

g++ -c test_lire.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe lire equation5_5.txt
./arifoglu_labo29.exe lire equation6_6.txt
./arifoglu_labo29.exe lire equation7_7.txt
./arifoglu_labo29.exe lire equation8_8.txt

2) Pour testing pivotages => appliquez les codes suivants respectivements

g++ -c test_pivotage.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
 ./arifoglu_labo29.exe pivotage

3) Pour testing resoudre => appliquez les codes suivants respectivements

g++ -c verifierSolution.hpp -std=c++20
g++ -c test_resoudre.cpp -std=c++20 g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o
   test_pivotage.o test_resoudre.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20
./arifoglu_labo29.exe resoudre equation5_5.txt
./arifoglu_labo29.exe resoudre equation6_6.txt
./arifoglu_labo29.exe resoudre equation7_7.txt
./arifoglu_labo29.exe resoudre equation8_8.txt


4) Pour testing Unsigned 
g++ -c test_unsigned.cpp -std=c++20
g++ unsigned.o Setbase.o Int.o rationnel.o matrice.o test_lire.o test_pivotage.o test_resoudre.o test_unsigned.o arifoglu_labo29.cpp -o arifoglu_labo29.exe -std=c++20

*/




