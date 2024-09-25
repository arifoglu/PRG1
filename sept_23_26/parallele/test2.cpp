#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int n = 5;
    int p = 2;
    cout << "n/p = "<< n / p <<endl;
    cout << "(double) (n/p) = "<< (double) (n / p) <<endl; // division en entier ,resultat double
    cout << "(double) n / p = "<< (double) n / p <<endl; // 1.convertit double 2.process
    
    return EXIT_SUCCESS;
}