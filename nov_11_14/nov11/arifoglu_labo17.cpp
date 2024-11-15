// Laboratoire  Laboratoire 17 
// Date:        11.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo17.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic
/*
Le buts: Implanter diverses fonctions pour des vector<int>
1)Écrire une surcharge de l’opérateur << permettant d’afficher un vector<int> v au moyen de cout << v;
2)Écrire une fonction qui prend un vector<int> en argument et qui retourne la longueur de la plus longue séquence d’éléments identiques adjacents et la position de son premier élément.
3)Écrire une fonction qui prend deux vector<int> en argument et qui indique si ces deux vecteurs comportent les mêmes éléments (si l’un des vecteur comporte un ou plusieurs éléments de valeur e, alors l’autre en comporte au moins un de valeur e)
4)Écrire une surcharge de l’opérateur+, qui prend en paramètre 2 vector supposés correspondre à des nombres entiers naturels de taille arbitraire représentés en base 10, où chaque compsante stocke un chiffre entre 0 et 9, et qui retourne un vector correspondant à l’addition de ces 2 nombres.
5)Écrire une fonction prenant comme paramètre deux vector<int> supposés triés par ordre croissant et qui retourne leur union, avec l’ensemble des éléments trié. Cette fonction doit s’exécuter en temps linéaire et pouvoir être utilisée par la fonction suivante.
6)Écrire un programme qui teste toutes les fonctions ci-dessus, notamment en affichantle nombre de Fibonacci fn de rang n, défini par f0 = 0,f1 = 1 et fn = fn−1 + fn−2 (sans risquer un débordement des entiers) et triant un vector par valeurs non décroissantes.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "fonctions_vecteurs.hpp"
using namespace std;

int main() {
    //1)La surcharge de l'opérateur <<
    vector<int> v = {1,2,3,4,5};
    cout << "Affichage du vector : " << v << endl;

    //2)La fonction longue_sequence
    vector<int> v1 = {1,2,2,3,3,4,4,4,5,1,1,1,1,5,5};
    longue_sequence(v1);

    //3)Compare vecteurs
    vector<int> v2 = {1,2,2,3,3,4,4,4,5,1,1,1,1,5,5};
    vector<int> v3 = {1,3,3,2,2,4,4,4,5,1,1,5,5,1,1};
    cout << "Les vecteurs sont egaux ? : " << boolalpha << compare_vecteurs(v2,v3) << endl;

    //4)L'addition deux vecteurs
    vector<int> v4 = {1,2,2};
    vector<int> v5 = {1,3,5};
    vector<int> total = v4 + v5;
    cout << "Addition des vecteurs : "<< total << endl;

    //5)la fonction tri_fusion
    vector<int> v6 = {1,3,5,7,9};
    vector<int> v7 = {2,4,6,8};
    vector<int> result = fusion(v6,v7);
    cout << "Fusion de deux vecteurs triés :" << result << endl;
    
    //6)Fibonacci 
    size_t n;
    cout << "Entrez une valeur pour calculer Fibonacci F(n): ";
    cin >> n;
    vector<int> vecteur_fibonacci = fibonacci(n);
    //afficher les valeurs fibonacci
    cout << "Fibonacci de F(0) à F(" << n << ") : ";
    for (size_t i = 0; i < vecteur_fibonacci.size(); ++i) {
        cout << vecteur_fibonacci[i];
        if (i < vecteur_fibonacci.size() - 1) 
        {
            cout << " "; 
        }
    }
    cout << endl;

    return EXIT_SUCCESS;
}

