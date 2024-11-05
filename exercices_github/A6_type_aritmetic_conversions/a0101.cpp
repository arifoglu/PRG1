/*
Ecrire un programme C++ qui détermine / affiche à l'écran, pour un type entier
- sa taille en bytes
- sa taille en bits (sans utiliser sizeof ni le résultat précédent)
- l'intervalle des valeurs possibles
- s'il est signé ou pas
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    using type = unsigned int ;
    
    cout << "Taille : " << sizeof(type) 
        << " byte" << (sizeof(type) < 2 ? "" : "s") << " = " 
        << (numeric_limits<type>::digits + numeric_limits<type>::is_signed) 
        << " bits\nPlage de valeurs : " 
        << +numeric_limits<type>::lowest() 
        << " -> "
        << +numeric_limits<type>::max()
        << "\nCe type est "
        << (numeric_limits<type>::is_signed ? "" : "non-")
        <<  "signé";

    return EXIT_SUCCESS;
}