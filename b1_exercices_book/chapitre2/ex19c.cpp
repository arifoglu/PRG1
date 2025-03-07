#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Combien de lignes ? : ";
    cin >> n;
    // up
    for(int i = 1; i <=n ;++i){
        for(int k = n - i; k > 0;--k){
            cout << " ";
        }
        for(int j = 1; j <= (2*i) - 1;++j){
            cout << "*";
        }  
        cout << "\n";
    }
    ////bottom
    for(int i = n - 1; i >= 1;--i){
        for(int k = n - i;k > 0;--k){
            cout << " ";
        }
        for(int j = 1; j <= (2*i)-1 ;++j){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

