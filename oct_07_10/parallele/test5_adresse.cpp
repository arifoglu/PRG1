#include <iostream>
#include <cstdlib>

using namespace std;

void echanger(int* a, int* b) {
    int t;
    cout << "debut echange: a = " << *a << " , b = " << *b << endl;
    t = *a; *a = *b; *b = t;
    cout << "fin echange : a = " << *a << " , b = " << *b << endl;
}

int main() {
    int c = 3, d = 5;
    cout << "avant echange: c = " << c << " , d = " << d << endl;
    echanger(&c, &d);
    cout << "apres echange: c = " << c << " , d = " << d << endl;
    
    /*
    cout << "avant echange: c = 3 ; d = 5;

    cout << "debut echange: a = 3  , b =  5 ;
    
    cout << "fin echange : a = 5  , b = 3;

    cout << "apres echange: c = 5, d = 3;


    
    */
    
    return EXIT_SUCCESS;
}