#include <iostream>
#include <cstdlib>
using namespace std;

void chose(int &);               // I
void chose(const int &);         // II

int main() {
    int n = 3;
    const int p = 5;

    // chose(n);         // num I
    //chose(p);           // num I
    chose(4.5);
    return EXIT_SUCCESS;
}

void chose(int & a){
    cout << "chose numero I a = " << a << endl;
}
void chose(const int & a){
    cout << "chose numero II a = " << a << endl;
}
