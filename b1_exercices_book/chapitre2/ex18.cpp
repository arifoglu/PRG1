#include <iostream>
using namespace std;

int main() {
    double n, som;
    cout << "Nombre :";
    cin >> n;
    int i;
    while (i <= n)
    {   
        som += 1.0 / i;
        ++i;
    }
    cout << "som : " << som << endl;
    
    return 0;
}