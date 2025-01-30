#ifndef RSA_HPP
#define RSA_HPP

#include <iostream>
#include "Primalite.hpp"
#include <cstdlib>
#include <ctime>

class RSA {
    private:
        int p, q, n, phi, e, d;
        static int pgcd(int a, int b);
        static int mod_inverse(int a, int m);
    public:
        RSA();
        int chiffrer(int message);
        int dechiffrer(int message_chiffre);
};

#endif