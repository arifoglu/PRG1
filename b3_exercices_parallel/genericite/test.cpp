#include <iostream>
#include <cstdlib>
using namespace std;

void fct(int , int);

int main() {
    int n = 10;
    int p = 20 ;
    fct(n,p); 
    fct(n,15);

    return EXIT_SUCCESS;
}
void fct(int a, int  b){
    cout << "premier argument : " << a << endl;
    cout << "second argument : "  << b << endl;
}


