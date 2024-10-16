// abdulkadir arifoglu 15.10.2024 Laboratoire 12
/*
Concevoir une bibliothèque mettant à disposition un type Rationnel stockant le
numérateur et le dénominateur sous la forme d’une simple structure comportant deux
entiers. 
les 4 opérations arithmétiques, les comparaisons ainsi qu’une fonction simplifie qui prend en paramètre un Rationnel et qui retourne une référence au même objet une fois simplifié (dénominateur > 0, premier avec le numérateur).
-La bibliothèque <numeric> met à disposition une fonction std::gcd retournant le plus grand diviseur commun de 2 entiers.
*/ 
#include <iostream>
#include <cstdlib>
#include <numeric>
#include "rationnel.hpp"
using namespace std;

int main(){
    int x1,y1;
    cout << "Saisissez le premier numérateur et dénominateur :\n";
    cin >> x1 >> y1;
    Rationnel r1 = {x1, y1};

    int x2,y2;
    cout << "Saisissez le deuxième numérateur et dénominateur :\n";
    cin >> x2 >> y2;
    Rationnel r2 = {x2, y2};

    // validation 
    r1 = validateRationnel(r1);
    r2 = validateRationnel(r2);
    
    Rationnel resultat = r1 + r2;
    cout << "Résultat : ";
    print_Rationnel(resultat);

    return EXIT_SUCCESS;
}