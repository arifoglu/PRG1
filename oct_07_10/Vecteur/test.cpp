#include <iostream>
#include <cstdlib>
using namespace std;

struct Vecteur {
    const double x; // Değer olarak
    const double y; // Değer olarak
};

// Fonksiyon prototipleri
Vecteur operator+(const Vecteur &gauche, const Vecteur &droit);
void printVecteur(const Vecteur &v);

int main() {
    Vecteur first = {100, 200}; // Değer ataması
    Vecteur second = {20, 40}; // Değer ataması
    Vecteur total = first + second; // Toplama işlemi
    printVecteur(total); // Sonucu yazdırma

    return EXIT_SUCCESS;
}

// Operatör aşırı yüklemesi
Vecteur operator+(const Vecteur &gauche, const Vecteur &droit) {
    return {gauche.x + droit.x, gauche.y + droit.y}; // Değer olarak döndürme
}

// Yazdırma fonksiyonu
void printVecteur(const Vecteur &v) {
    cout << "Vecteur(" << v.x << ", " << v.y << ")" << endl; 
}