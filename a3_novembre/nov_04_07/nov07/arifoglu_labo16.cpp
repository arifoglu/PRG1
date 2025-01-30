// Laboratoire  Laboratoire 16 (Sensibilisation à la complexité algorithmique)
// Date:        08.11.2024
// Author:      Abdulkadir Arifoglu
// File:        arifoglu_labo16.cpp
// Compiler:    clang version 16.0.0
// Options:     -std=c++20 -Wall -Wextra -Wconversion -Wsign-conversion -Wvla -pedantic

/*
Buts: Manipulation avec des string, lecture dans un fichier, mesure du temps de calcul
-Écrire un programme qui prend en paramètre un nom de fichier, un nombre entier (k) et une option
-Ce programme :
1) Lit le fichier dont on a fourni le nom ("la_comedie_humaine.txt")
2) Mémorise son contenu dans un string str; et modifie str pour créer une chaîne dont la longueur en est multipliée par 2^k en répétant k fois l’instructions str += str; si k > 0 ou avec str.resize(str.length()/(1 << -k)); si k < 0
3) Remplace toutes les occurrences de "de " dans str par "xYxYx" et vice-versa (pour vérifier que l’on retrouve la chaîne d’origine)
4)Affiche la longueur de la chaîne str et le temps de calcul mis par la fonction pour procéder aux remplacements
5)Exécuter ce programme avec les deux options et différentes valeurs de k
6)À l’aide d’une feuille de calcul, créer un diagramme donnant l’effort de calcul en fonction de la longueur de la chaîne str pour les deux options

*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <chrono>
#include "manipulations.hpp"
using namespace std;
using namespace std::chrono;

int main(int argc, char *argv[]){
   // Nous attendons 6 arguments depuis la ligne de commande
   // 1)nom_program 2)nom_fichier_source 3)k 4)nom_fonction 5)mot1 6)mot2
    if(argc != 6){
        cerr << "Erreur!!\nC'est necessaire => nom_program nom_fichier_source k nom_fonction mot1 mot2 "<<endl;
        return EXIT_FAILURE;
    }

    //Nous récupérons les paramettres depuis la ligne de commande
    //le nom du fichier 
    string nom_fichier_source = argv[1];
    //la valeur de k 
    int k = atoi(argv[2]);
    //la fonction à utiliser 
    string nom_fonction = argv[3];
    //les strings à modifier 
    string mot1 = argv[4];
    string mot2 = argv[5];
    
    //verification de mot1 mot2 
    if(mot1.empty() || mot2.empty()){
        cerr << "Erreur : mot1 et mot2 ne doivent pas être vide.";
        return EXIT_FAILURE;
    }

    //Nous lisons le fichier donné par l'utilisateur et  le stockons dans 'str'
    string str = lire_fichier(nom_fichier_source);

    // Verification du fichier 
    if(str.empty()){
        cerr << "Erreur : Le fichier est vide ou n'a pas pu ouvrir.";
        return EXIT_FAILURE;
    }

    //Sauvegarder le texte original pour s'afficher a la fin du program
    string string_original = str;

    //Début du calcul du temps
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    //modifier la longeur de str,nous allons utiliser ce fonction avec le parametre k
    str = modifier_longeur(str,k);

    // Verifier le nom du fonction
    if(nom_fonction != "GPT" && nom_fonction != "all")
    {
        cerr << "Le nom du fonction n'est pas valide.Utilisez 'GPT' ou 'all' ";
        return EXIT_FAILURE;
    }
    //L’utilisation de la fonction sélectionnée
    if(nom_fonction == "GPT")
    {
        str = replace_all_GPT(str,mot1,mot2);
    }
    else if(nom_fonction == "all")
    {
        str = replace_all(str,mot1,mot2);
    }

    //Fin du calcul du temps
    duration<double> time_span = duration_cast<duration<double>>(high_resolution_clock::now() - t1);
    //Affichage du temps
    cout << "La nouvelle taille: " << str.length() << " bytes." << endl;
    cout << "La duréé : " << time_span.count() << " secondes ." << endl;
    
    //Restaurer le text original
    str = string_original;

    //Affichage la taille et le résultat
    cout << "Nous avons restauré le text original.\n"
         << "La taille du text original : "
         << str.length() 
         << " bytes."
         << endl;

    return EXIT_SUCCESS;
}







