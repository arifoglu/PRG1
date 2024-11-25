#include <iostream>
#include <cstdlib>
#include <typeinfo>

using namespace std;

int main(){
    int a = 5;
    a++;
    cout << "a = " << a << endl;
    ++a;
    cout << "a = " << a << endl;
    
    int b = ++a;
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    int c = a++;
    cout << "c = " << c << endl;
    cout << "a = " << a << endl;


    return EXIT_SUCCESS;
}