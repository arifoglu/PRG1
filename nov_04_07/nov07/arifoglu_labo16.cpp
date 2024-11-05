// abdulkadir arifoglu 08.11.2024 Laboratoire 16 
/*
Buts: Manipulation avec des string, lecture dans un fichier, mesure du temps de calcul
-Écrire un programme qui prend en paramètre un nom de fichier, un nombre entier (k)
et une option
Ce programme :
1) Lit le fichier dont on a fourni le nom ("la_comedie_humaine.txt")
2) Mémorise son contenu dans un string str; et modifie str pour créer une chaîne dont la
longueur en est multipliée par 2^k en répétant k fois l’instructions str += str; si k > 0 ou avec str.resize(str.length()/(1 << -k)); si k < 0
3) Remplace toutes les occurrences de "de " dans str par "xYxYx" et vice-versa (pour vérifier que l’on retrouve la chaîne d’origine)
4)Affiche la longueur de la chaîne str et le temps de calcul mis par la fonction pour procéder aux remplacements
5)Exécuter ce programme avec les deux options et différentes valeurs de k
6)À l’aide d’une feuille de calcul, créer un diagramme donnant l’effort de calcul en fonction de la longueur de la chaîne str pour les deux options

*/
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

string replace_all_GPT(string str,const string &from, const string & to );
string lire_fichier(const string & nom_fichier);
string modifier_longeur(string str, int k);

int main(){
    string nom_fichier_source;
    cout << "Entrez le nom de la fichier source : ";
    cin >> nom_fichier_source;
    int option;
    cout << "Choisissez une option (1 / 2):\n"
         << "1)La modification de longeur par (2^k) : "
         << "2)Option (2) Remplacement 'de' avec 'xYxYx' :(2) ";
    cin >> option;

    int k ;
    cout << "Entrez la valeur de k : ";
    cin >> k;

    //Nous lisons le fichier donné par l'utilisateur et  le stockons dans 'str'
    string str = lire_fichier(nom_fichier_source);

    //if(option == 1)

    //modifier la longeur de str,nous allons utiliser ce fonction avec le parametre k
    modifier_longeur(str,k);


    return EXIT_SUCCESS;
}

string replace_all_GPT(string str,const string &from, const string & to ){
    if(from.empty())
    { 
        // Si la partie à remplacer est vide, string elle-même est renvoyée  
        return str;
    }
    // Initialise la position de départ à 0 pour commencer la recherche
    size_t start_pos = 0;
    // Effectuer le remplacement lors que 'from' est trouvée dans 'str'
    while((start_pos = str.find(from,start_pos)) != std::string::npos )
    {
        //Remplace la sous-chaîne trouvée par 'to' à la position 'start_pos'
        str.replace(start_pos,from.length(),to);
        // Avance la position de départ de la longeur de 'to'
        start_pos += to.length();
    }
    return str;
} 

string lire_fichier(const string & nom_fichier){
    //Pour la lecture à partir d'un fichier
    ifstream fichier(nom_fichier);
    //Verifier si le fichier est ouvert
    if(!fichier){
        cerr << "Le fichier n'a pas pu ouvrir. ";
        return ""; 
    }
    //Lire le fichier (line) et sauvegarde (contenu) en tant que string
    string line, contenu; 
    while(getline(fichier,line)){
        contenu += line + "\n";
    }
    fichier.close();
    return contenu;
}

string modifier_longeur(string str, int k){
    // si k > 0 
    if(k > 0)
    {   //pour augmenter la longeur
        for(int i = 0; i < k ;++i)
        {
            str += str;
        }
    }
    // si k < 0
    else if(k < 0)
    {   //pour diminuer la longeur
        str.resize(str.length() / (1 << - k));
    }
    return str;
}
