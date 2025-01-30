#include "RSA.hpp"

int RSA::pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int RSA::mod_inverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0) x1 += m0;
    return x1;
}


RSA::RSA() {
    srand(time(nullptr));
    do { p = rand() % 100 + 50; } while (!Primalite::test_primalite(p));
    do { q = rand() % 100 + 50; } while (!Primalite::test_primalite(q) || q == p);
    
    n = p * q;
    phi = (p - 1) * (q - 1);
    do { e = rand() % (phi - 2) + 2; } while (pgcd(e, phi) != 1);
    d = mod_inverse(e, phi);
}


int RSA::chiffrer(int message) {
    return Primalite::puissance_modulaire(message, e, n);
}


int RSA::dechiffrer(int message_chiffre) {
    return Primalite::puissance_modulaire(message_chiffre, d, n);
}
