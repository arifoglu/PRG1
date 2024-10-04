#include <iostream>
#include <cstdlib>

using namespace std;

void afficher(int p1, char p2) {
    cout << "p1 = " << p1 << " , p2 = " << p2 << endl;
}

int main() {
    const char CAR = 'A';
    afficher(1, 'A');          // p1 = 1 , p2 = A
    afficher(1, 65);           // p1 = 1 , p2 = A 
    afficher('A', 67);         // p1 = 65 ,p2 = C
    afficher(CAR, CAR + 1);    // p1 = 65 , p2= B
    
    return EXIT_SUCCESS;
}