#include <iostream>

using namespace std;

int f(int p, int &n);

int main() {
    int n, p;
    cout << "n : ";
    cin >> n;
    cout << "p : ";
    cin >> p;
    
    cout << "avant, n : " << n << endl;
    f(p,n);
    cout << "après  n : " << n << endl;
    
    return 0;
}

int f(int p, int &n){
    n += (2 * p + 1);
    return n;
}
