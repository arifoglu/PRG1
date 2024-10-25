#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    int a = -12345;
    int wcol = 10; 

    cout << "0123456789" << endl;

    cout << a << endl;
    
    cout << setw(wcol) << a <<endl;

    cout << left  << setw(wcol) << a <<endl;
    cout << right << setw(wcol) << a <<endl;
    cout << internal << setw(wcol) << a <<endl;
    cout << setw(wcol) << a << endl; 
    cout << a << endl;
    cout << setfill('*') << setw(wcol) << a << endl; 

    return EXIT_SUCCESS;
}
