#include <iostream>
#include <cstdlib>

using namespace std;

void adresse(int* adr) {
    cout << " adr : " << adr << endl;
    cout << "*adr : " << *adr << endl;
    cout << "&adr : " << &adr << endl;
}

int main() {
    int valeur = 3;
    
    cout << " valeur : " << valeur << endl; // 3
    cout << "&valeur : " << &valeur << endl;// 0x16ba03358
    adresse(&valeur);
    
    
    return EXIT_SUCCESS;
}