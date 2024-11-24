/*
Pour chacune des lignes de code suivante, indiquez
si elle compile
si oui
quel est le type de la variable
ce que la ligne affiche;
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    auto v1 = 1.5;
    cout << v1 << endl; // double => 1.5
    
    auto v2 = 1E3;
    cout << v2 << endl; // double => 1.0 * 10^3 = 1000 
    
    //auto v4 = 12.0u; // compile pas unsigned utilise uniqument int
    //cout << v4 <<endl;
    
    auto v6 = 1.0L; // long double => 1.0 or 1
    cout << v6 << endl;
    
    auto v7 = 0.5;
    cout << v7 << endl; // double => 0.5
    
    auto v8 = 5.;
    cout << v8 << endl; // double => 5. or 5

    //auto v14 = 0x0.2; 
    //cout << v8 << endl; // ne compile pas 

    auto v17 = 0x1.p0;
    cout << v17 << endl; // double 1

    auto v18 = 0x1.8p+0f ;
    cout << v18 <<endl; // double (1 * 16^0 + 8 * 16^-1 ) * 2^0 

    auto v19 = 0x1.p-2L;
    cout << v19 << endl; // double => 0.25

    auto v20 = 0x1.1p+2;
    cout << v20 << endl; // 4.25


    return EXIT_SUCCESS;
}