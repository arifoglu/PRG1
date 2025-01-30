#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <stdexcept>
#include "rationnel.hpp" 

using namespace std;

template<typename T>
class Matrice {
private:
    int lignes;
    int colonnes;
    T** valeurs; 

public:
    Matrice(int n, int m);
    ~Matrice();

    void lireMatrice();
    void afficherMatrice() const;
    void pivoter(int colonne);

    T* resoudre();
};

#endif 
