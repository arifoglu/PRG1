#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
bool vrai = true;
bool faux = false;

cout << vrai <<endl;
cout << faux <<endl;

// boolalpha
cout << boolalpha << vrai <<endl;
cout << boolalpha << faux <<endl;

// noboolalpha
cout << noboolalpha << vrai <<endl;
cout << noboolalpha << faux <<endl;
    return EXIT_SUCCESS;
}
