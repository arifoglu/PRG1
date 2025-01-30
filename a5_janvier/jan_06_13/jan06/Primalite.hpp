#ifndef PRIMALITE_HPP
#define PRIMALITE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Primalite {
public:
    static bool test_primalite(int p); 
    static int puissance_modulaire(int base, int exponent, int mod);

private:
    static int random_int(int min, int max); 
};

#endif