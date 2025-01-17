#ifndef MATRICE_HPP
#define MATRICE_HPP

#include <iostream>
#include <stdexcept>
#include "rationnel.hpp" 
#include <fstream>

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

    void lireMatrice(ifstream& fichier);
    void afficherMatrice() const;
    void pivoter(int colonne);
    
    T    getValeur(int ligne, int colonne) const;       
    void setValeur(int ligne, int colonne, T valeur); 
    
    T* resoudre();
};

#endif 
