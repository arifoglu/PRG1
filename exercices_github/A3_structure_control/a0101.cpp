#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int prixActuel, nouveauPrix;

    // prixActuel == 100 => 90 
    if (prixActuel > 100) {
       nouveauPrix = prixActuel - 20;
       cout << nouveauPrix <<endl;
    } else {
       nouveauPrix = prixActuel - 10;
       cout << nouveauPrix <<endl;
    }
    // 
    // prixActuel == 100 => 80
    if (prixActuel < 100) {
    nouveauPrix = prixActuel - 10;
       cout << nouveauPrix <<endl;
    } else {
    nouveauPrix = prixActuel - 20;
       cout << nouveauPrix <<endl;
    }
    return EXIT_SUCCESS;
}