#include <iostream>
using namespace std;

template <typename T>
int compte(T* tab, int n){
    int nombre_zero = 0;
    for(int i = 0; i < n ; i++){
        if(!tab[i]){
            nombre_zero++;
        }
    }
    return nombre_zero;
}

int main() {
    int t[5] = {5,2,0,2,0};
    char c[6] = {0,12,0,0,0,5};
    cout << "compte (t) :" << compte(t,5) <<endl;
    cout << "compte (c) :" << compte(t,6) <<endl;
    return 0;
}

