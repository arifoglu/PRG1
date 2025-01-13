#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x < 0){
        cout << "ERROR!!! x is negatif";
        return EXIT_FAILURE;
    }
    cout << "OK.no problem!!!";
    return EXIT_SUCCESS;
}
