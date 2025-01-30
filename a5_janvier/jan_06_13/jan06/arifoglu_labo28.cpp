// Laboratoire  Laboratoire 28 Génération de clés de cryptage
// Date:        10.01.2025
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo28.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
- Test de la classe Int
- Implantation d’algorithmes donnés par des pseudo-codes
- Implanter une fonction probabiliste permettant si un nombre entier fourni en paramètre est premier. S’inspirer de l’algorithme de test de primalité rapide donné ci-dessous
- Implanter la méthode de génération de clés de cryptographie publiques proposéeen 1973 par Clifford Christopher Cocks, connue sous le nom de RSA
- Écrire un programme de test vérifiant qu’un message secret crypté avec une clépublique peut être correctement décrypté avec la clé secrète
*/
#include <iostream>
#include "RSA.hpp"
using namespace std;

void test_rsa() {
    RSA rsa; 
    
    int test_messages[] = {42, 123, 999, 7, 19};
    int num_tests = sizeof(test_messages) / sizeof(test_messages[0]);

    for (int i = 0; i < num_tests; i++) {
        int message = test_messages[i];
        int message_chiffre = rsa.chiffrer(message);
        int message_dechiffre = rsa.dechiffrer(message_chiffre);

        std::cout << "Test " << (i + 1) << ": "
                  << "Message original = " << message
                  << ", Message chiffré = " << message_chiffre
                  << ", Message déchiffré = " << message_dechiffre;

        if (message == message_dechiffre) {
            std::cout << "  SUCCÈS" << std::endl;
        } else {
            std::cout << "  ÉCHEC" << std::endl;
        }
    }
}

int main() {
    test_rsa();
    
    return EXIT_SUCCESS;
}
/*
g++ -c Int.cpp -std=c++20                   
g++ -c unsigned.cpp -std=c++20
g++ -c Setbase.cpp -std=c++20
g++ -c Primalite.cpp -std=c++20
g++ -c EuclideEtendu.cpp -std=c++20 
g++ -c ExponentiationModulaire.cpp -std=c++20 
g++ -c RSA.cpp -std=c++20 
gppw Int.o unsigned.o Setbase.o Primalite.o EuclideEtendu.o ExponentiationModulaire.o RSA.o arifoglu_labo28.cpp -o arifoglu_labo28.exe
./arifoglu_labo28.exe
*/


    