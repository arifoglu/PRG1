#include "biblio_principale.hpp"
#include "biblio.hpp"
#include <iostream>

void imprime_valeur() {
extern int variable_partagee; 
increment_var_partage(); 
std::cout << variable_partagee << std::endl;
}