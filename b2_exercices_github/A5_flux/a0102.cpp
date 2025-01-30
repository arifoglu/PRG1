/*
Modifiez le programme en C++ de l'exercice 01-01 pour faire ce qui suit :

Demander à l'utilisateur de saisir le nom du fichier de sortie.
Lire le contenu du fichier de sortie, s'il existe et l'afficher sur la console.
Demandez à l'utilisateur de saisir du text et ajouter (append) le texte saisi dans le fichier de sortie. Si le fichier existe déjà, il ne doit pas être écrasé.
Assurez-vous que le programme gère les erreurs d'ouverture de fichier.
pour terminer la saisie, l'utilisateur pourra tapez #exit# dans une ligne séprée ou utiliser Ctrl+D.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nom_fichier;
    cout << "Entrez le nom du fichier de sortie : ";
    cin >> nom_fichier;

    cin.ignore();

    fstream fichier(nom_fichier,ios::in | ios::out | ios::app);

    if(!fichier){
        cerr << "Erreur ";
        return EXIT_FAILURE;
    }

    fichier.seekg(0);
    string line;
    while( getline(fichier,line)){
        cout << line << endl;
    }

    while(true){
        string text;
        cout << "Vous pouvez ajouter qqch :\n";
        getline(cin,text);
        if(text == "exit"){break;};

        fichier.clear();

        fichier << text << endl;
    }

    fichier.close();
    return EXIT_SUCCESS;
}    