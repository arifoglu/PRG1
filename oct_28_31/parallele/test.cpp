#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
    int valeur;
    int nbErreurs = 0;

    cout << "Entrez un entier < 100: ";
    cin >> valeur;

    while (valeur >= 100) {
    nbErreurs++;
    cerr << "Erreur : saisie incorrecte, réessayez." << endl;
    cin >> valeur;
    }

    if (nbErreurs > 0) {
    clog << "Log : Erreurs de saisie (" << nbErreurs << ")" << endl;
    }

    cout << "Valeur = " << valeur << endl;
    
    return EXIT_SUCCESS;
}