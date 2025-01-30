/*
En utilisant exclusivement les services offerts par la classe string, écrire un programme C++ qui, après avoir demandé à l'utilisateur de saisir un nombre entier (de type int) ≥ 0, affiche à l'écran combien de chiffres contient ce nombre et ce que valent le premier chiffre et le dernier chiffre du nombre.
Entrez un nombre entier >= 0 : 123

Nombre saisi       : 123
Nombre de chiffres : 3
Premier chiffre    : 1
Dernier chiffre    : 3
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void combien_de_chiffre(int p){
        string nombre_au_string = to_string(p);
        cout << "Nombre saisi : "   << nombre_au_string << "\n"
         << "Nombre de chiffres : " << nombre_au_string.length()<< "\n"
         << "Premier chiffre : "    << nombre_au_string[0] <<"\n"
         << "Dernier chiffre : "    << nombre_au_string[nombre_au_string.length() - 1] << "\n";
}

int main(){
    int nombre;
    cout << "Entrez un nombre entier >= 0 :";
    cin >> nombre;
    
    combien_de_chiffre(nombre);
    return EXIT_SUCCESS;
}
