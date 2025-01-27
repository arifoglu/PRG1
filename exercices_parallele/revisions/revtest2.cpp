#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <type_traits>

using namespace std;

// Concept tanımı: bir türün STL konteyneri olup olmadığını kontrol ediyor
template <typename T>
concept Container = requires(T t) {
    t.begin();    // Konteynerin bir `begin()` fonksiyonu olmalı
    t.end();      // Konteynerin bir `end()` fonksiyonu olmalı
    typename T::value_type; // `value_type` tanımlı olmalı
};

// Sadece STL konteynerleri üzerinde çalışan bir fonksiyon
template <Container T>
void yazdir(const T& c) {
    for (const auto& eleman : c) {
        cout << eleman << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v {1, 2, 3, 4};
    list<string> l {"Merhaba", "Dünya"};
    array<double, 3> a {3.14, 2.71, 1.61};
    int dizi[] = {10, 20, 30};

    yazdir(v); // Geçerli: vector bir konteyner
    yazdir(l); // Geçerli: list bir konteyner
    yazdir(a); // Geçerli: array bir konteyner
    // yazdir(dizi); // Geçersiz: Düz C tarzı diziler bir konteyner değil

    return 0;
}
