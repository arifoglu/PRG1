#include "Primalite.hpp"

// (b^e mod m)
int Primalite::puissance_modulaire(int base, int exponent, int mod) {
    int result = 1;
    base = base % mod;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent /= 2;
    }
    return result;
}

bool Primalite::test_primalite(int p) {
    if (p < 2) return false;
    if (p == 2) return true;
    
    srand(time(nullptr));
    for (int i = 0; i < 10; i++) {
        int a = rand() % (p - 1) + 1;
        if (puissance_modulaire(a, p - 1, p) != 1) {
            return false;
        }
        
        int q = 1, u = p - 1;
        while (u % 2 == 0 && q == 1) {
            u /= 2;
            q = puissance_modulaire(a, u, p);
            if (q != 1 && q != p - 1) return false;
        }
    }
    return true;
}