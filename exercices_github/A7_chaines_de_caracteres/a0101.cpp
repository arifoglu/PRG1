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
    cin >> input ;
    if(isalpha(input))
    {
        cout << input << "est une lettre de l'alphabet : vrai" << endl;
    }
    else if(islower(input))
    {
        cout << input << "est une lettre minuscule : vrai" <<endl;

    }
    else if(isdigit(input))
    {
        cout << input << "est un chiffre : vrai" <<endl;
    }
    else if(!isdigit(input))
    {
        cout << input << "est un chiffre : faux" <<endl;
    }
    else if(ispunct(input))
    {
        cout << input << "est un caractere de ponctuation : vrai" <<endl;
    }
    else if(!ispunct(input)){
        cout << input << "est un caractere de ponctuation : faux" <<endl;
    }
    return EXIT_SUCCESS;
}