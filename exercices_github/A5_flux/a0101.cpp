/*
Écrivez un programme en C++ qui fait ce qui suit :

Demandez à l'utilisateur de saisir le nom du fichier de sortie.
Si le fichier existe déjà, il ne doit pas être écrasé.
Demandez à l'utilisateur de saisir du texte et enregistrez le texte saisi dans le fichier de sortie. Répétez cette action tant que l'utilisateur n'a pas terminé.
Pour terminer la saisie, l'utilisateur pourra tapez #exit# dans une ligne séprée ou utiliser Ctrl+D.
Assurez-vous que le programme gère les erreurs d'ouverture de fichier.
*/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string nom_fichier;
    cout << "Entrez le nom du fichier de sortie : ";
    cin  >> nom_fichier;

    cin.ignore();

    // ouverture du fichier en mode d'écriture
    ofstream fichier(nom_fichier,ios::out | ios::app);

    // verification d'erreur
    if(!fichier){
        cerr << "Erreur!!";
        return EXIT_FAILURE;
    }
    
    while(fichier){
        string text;
        cout << "Entrez votre texte : ";    
        getline(cin,text);
        
        // pour quitter de programme
        if(text == "exit"){break;}
        
        fichier << text << endl;
    }
    fichier.close();

    return EXIT_SUCCESS;
}    