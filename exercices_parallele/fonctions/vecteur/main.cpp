#include <iostream>
#include <cstdlib>
#include "vecteur.hpp"

using namespace std;

int main() {
    Vecteur first = {100,200};
    Vecteur second = {20,40};
    Vecteur total = first + second;
    Vecteur difference = first - second;
    Vecteur division = first / second;
    Vecteur multiple = first * second;
    printVecteur(total);
    printVecteur(difference);
    printVecteur(division);
    printVecteur(multiple);
    first += second;
    printVecteur(first);
    first -= second;
    printVecteur(first);

    return EXIT_SUCCESS;
}






