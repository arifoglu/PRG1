/*

*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    string prenom_nom;
    cout << "Entrez votre prenom et votre nom :";
    getline(cin,prenom_nom);
    
    // Premier lettre
    char premiere_lettre_prenom = prenom_nom[0]; 
    // Premier position d'espace blanc
    int position_espace_blanc = prenom_nom.find(' ');
    // Premier lettre du nom
    char premiere_lettre_nom = prenom_nom[position_espace_blanc + 1];
    // Premier position du nom
    int position_premiere_lettre_nom = position_espace_blanc + 1; // 

    // Prenom
    string prenom = prenom_nom.substr(0,position_espace_blanc);
    cout << "Votre prenom est   : " << prenom   << "\n";
    // Nom
    string nom = prenom_nom.substr(position_premiere_lettre_nom);
    cout << "Votre nom est      : " << nom      << "\n";

    // Acronyme
    char lettre_premiere = prenom_nom[0];
    char lettre_milieu = premiere_lettre_nom;
    char lettre_derniere =  toupper(prenom_nom[prenom_nom.length() - 1 ]);
     
    string acronyme = string(1,lettre_premiere) + string(1,lettre_milieu) + string(1,lettre_derniere); 
    cout << "Votre acronyme est : " << acronyme << "\n";

    
    return EXIT_SUCCESS;
}
