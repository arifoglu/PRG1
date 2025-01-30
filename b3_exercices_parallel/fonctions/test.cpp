#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double base;
    int exposant;
    cout << "Saisissez base et exposant\n";
    cout << "Base : ";
    cin >> base;
    cout << "Exposant : ";
    cin >> exposant;

    double val = 1;
    
    for(int i = 0; i < exposant ;++i){
        val *= base;
    }
    cout << base << "^"<< exposant << " = " << val << endl;

    return EXIT_SUCCESS;
}