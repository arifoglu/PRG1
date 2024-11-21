#include <iostream>
#include <cstdlib>
using namespace std;

void sosie(int);
void sosie(double);

int main() {
    char c; float y;
    
    sosie(c);           // num I
    sosie(y);           // num II
    sosie('A');         // num I 

    return EXIT_SUCCESS;
}

void sosie(int a){
    cout << "sosie numero I a = " << a << endl;
}
void sosie(double a){
    cout << "sosie numero II a = " << a << endl;
}
