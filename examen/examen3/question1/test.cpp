#include <iostream>

using namespace std;

template <typename T, typename U> void f(T t, U u) {
   cout << "f1" << endl;
}
template <typename T, typename U> void f(T* t, U* u) {
   cout << "f2" << endl;
}
template <typename T> void f(T t, T u) {
   cout << "f3" << endl;
}

#ifdef TEST_AJOUT_FONCTION_MANQUANTE
#include "fonction_manquante.tpp"
#endif 

int main() {

#include "appel_ambigu.cpp"

}
/*
Remplacer le code de appel_ambigu.cpp par un appel ambigu à la fonction f si seules les fonctions génériques fournies dans main.cpp existent

Écrire dans fonction_manquante.tpp une fonction manquante, générique ou non, de sorte qu'aucun appel à f avec 2 paramètres ne soit ambigu. Cette fonction comporte comme seule instruction dans sa définition cout << "f4" << endl;

Le test 1 vérifie que l'appel est ambigu. La compilation doit échouer.
Le test 2 vérifie qu'avec l'ajout, l'appel n'est plus ambigu et que la nouvelle fonction, affichant f4, est celle qui est appelée.

// Définir ici une fonction supplémentaire 
// pour qu'aucun appel de f avec 2 paramètres ne soit ambigu

template <typename T> void f(T* t, T* u) {
   cout << "f4" << endl;
}

// 3 pts 
*/
