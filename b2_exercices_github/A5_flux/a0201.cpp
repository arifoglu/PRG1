/*
Modifiez le programme en C++ de l'exercice 01-02 pour ajouter les fonctionnalités suivantes :

Demander à l'utilisateur de saisir le nom d'un fichier source.
Au lieu de saisir le texte, utiliser cin pour lire depuis le fichier source et ajouter (append) le texte dans le fichier de sortie. Si le fichier de sortie existe déjà, il ne doit pas être écrasé.
Ps. Le code utilisé pour l'écriture ne doit pas changer, comparé à l'exercice 01-02.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(){
    // LECTURE À PARTIR D'UN FICHIER ET ÉCRITURE À PARTIR D'UN AUTRE FICHIER
    string nom_fichier_source;
    cout << "Entrez le nom du fichier source : ";
    cin >> nom_fichier_source;
    
    ifstream fichier_source(nom_fichier_source);

    if(!fichier_source){
        cerr << "Erreur!!";
        return EXIT_SUCCESS;
    }


    string nom_fichier_sortie;
    cout << "Entrez le nom du fichier de sortie : ";
    cin >> nom_fichier_sortie;

    // en mode d'ajouter
    ofstream monfichier(nom_fichier_sortie,ios::out | ios::app);

    if(!fichier_source){
        cerr << "Erreur!!";
        return EXIT_SUCCESS;
    }

    // LIRE 
    string line;
    while(getline(fichier_source,line)){
        // ECRIRE
        monfichier << line << endl;
    }

    monfichier.close();
    fichier_source.close();

    cout << "Les données ont été ajoutées au fichier de sortie" << endl;


    return EXIT_SUCCESS;
}    