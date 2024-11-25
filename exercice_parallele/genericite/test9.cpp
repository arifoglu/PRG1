#include <iostream>
#include <cstdlib>
using namespace std;

void chose(int &);               // I
void chose(int );               // II

int main() {
    int n = 3;
    float x;

    //chose(n);          // ambiguité 
    //chose(x);           //  II

    return EXIT_SUCCESS;
}

void chose(int & a){
    cout << "chose numero I a = " << a << endl;
}
void chose(int a){
    cout << "chose numero II a = " << a << endl;
}
