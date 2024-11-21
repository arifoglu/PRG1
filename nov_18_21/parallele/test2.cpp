#include <iostream>
#include <cstdlib>
using namespace std;

void fct(int , int = 4 );

int main() {
    int n = 15;
    int p = 25 ;
    //fct(n,p); 
    //fct(n);
    //fct(); // error

    return EXIT_SUCCESS;
}
void fct(int a, int  b){
    cout << "premier argument : " << a << endl;
    cout << "second argument : "  << b << endl;
}


