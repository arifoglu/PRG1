#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Combien de lignes ? : ";
    cin >> n;
    for(int i = 1; i <= n;++i){
        for(int j = n ; j >= i ;--j){
            cout << "*";
        }
        cout << "\n";
        for(int k = 1; k <= i;++k){
            cout << " ";
        }
    }
    return 0;
}