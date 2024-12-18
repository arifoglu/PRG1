#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <list>
using namespace std;


int main() {
    list<int> liste;
    vector<int> v;

    size_t n = count(liste.begin(), liste.end(), 3);    // Compte le nombre de 3 dans liste
    n = count(v.begin(), v.end(), 3);                   // Compte le nombre d'élément de v valant 3
    
    copy(v.begin(), v.end(), liste.begin());

    return EXIT_SUCCESS;
}