#include <iostream>
using namespace std;

int fibo(int n){
    if(n <= 1)return n;
    return fibo(n-2) + fibo(n-1);
}

int main() {
    int n;
    cout << "Nombre:";
    cin >> n;
    cout << n <<"ième valeur : "<< fibo(n)<<endl;
    return 0;
}