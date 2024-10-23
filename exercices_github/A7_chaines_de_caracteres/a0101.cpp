/*
Ecrire un programme C++ qui, après avoir demandé à l'utilisateur de saisir un caractère, détermine / affiche à l'écran si ce caractère :

est une lettre de l'alphabet
est une lettre minuscule de l'alphabet
est un chiffre
est un symbole de ponctuation
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    char input ;
    cout << "Tapez un caractére : ";
    cin >> input;

    cout << "Code ASCII '"<< input << "'" << "                      : " << int(input) << endl;

    isalpha(input) 
    ? cout << "'" << input << "'" << " est une lettre de l'alphabet    : vrai\n" 
    : cout << "'" << input << "'" << " est une lettre de l'alphabet    : faux\n";

    islower(input) 
    ? cout << "'" << input << "'" << " est une lettre de minuscule     : vrai\n" 
    : cout << "'" << input << "'" << " est une lettre de minuscule     : faux\n";

    isdigit(input) 
    ? cout << "'" << input << "'" << " est un chiffre                  : vrai\n" 
    : cout << "'" << input << "'" << " est un chiffre                  : faux\n";

    ispunct(input) 
    ? cout << "'" << input << "'" << " est un caractere de ponctuation : vrai\n" 
    : cout << "'" << input << "'" << " est un caractere de ponctuation : faux\n";
   


    return EXIT_SUCCESS;
}