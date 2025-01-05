#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

// Fonction pour afficher un tableau
template <typename T, size_t N>
void afficher(const string& nom, const array<T, N>& tab) {
    cout << nom << " = | ";
    for (const auto& elem : tab) {
        cout << elem << " | ";
    }
    cout << endl;
}

// Fonction pour concaténer deux tableaux et renvoyer un nouveau tableau
template <typename T, size_t N, size_t M>
auto appondre(const array<T, N>& a, const array<T, M>& b) {
    array<T, N + M> res;
    size_t i = 0;

    for (; i < N; ++i) {
        res[i] = a[i];
    }
    for (size_t j = 0; j < M; ++j, ++i) {
        res[i] = b[j];
    }

    return res;
}
