#include <iostream>
#include <cstdlib>
using namespace std;

template <typename De, typename A = int>
A conversion(De val = 0) {
    return (A)val;
}


int main() {
    double d = 3.5;
    cout << conversion(d);

    return EXIT_SUCCESS;
}