#include <iostream>
#include <cstdlib>
#include <cstring>
#include "setchar.hpp"
using namespace std;

int main () {
    set_char ens;
    char mot[81];
    cin >> mot;
    int i;
    
    for(i = 0; i <strlen(mot) ;i++){
        ens.ajoute(mot[i]);
    }

    cout << "il contient " << ens.cardinal () << " caractères différents" ;   
    if (ens.appartient('e'))
    {
        cout << "le caractère e est présent\n" ;   
    }
    else
    {
        cout << "le caractère e n'est pas présent\n" ;
    }
    return EXIT_SUCCESS;
}