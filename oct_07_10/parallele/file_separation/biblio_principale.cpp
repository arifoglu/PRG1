#include "biblio_principale.hpp"
#include "biblio_utilitaire.hpp"
#include <iostream>
using namespace std;

void imprime_valeur() {
    extern int variable_partagee;
    incremente_var_partagee();
    cout << variable_partagee << endl;
}