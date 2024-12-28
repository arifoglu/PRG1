#include <iostream>
using namespace std;

template<typename T> T calcul(T);

int main() {
    int x = 3;
    float y = 2.5;
    cout << "carre de " << x << " = " << calcul(x) << endl;
    cout << "carre de " << y << " = " << calcul(y) << endl;
    return 0;
}

template<typename T>
T calcul(T a){
    return a * a;
}