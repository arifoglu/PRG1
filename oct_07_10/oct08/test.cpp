#include <iostream>
#include <cstdlib>

using namespace std;

const int base = 10;

void imprime(int n){
    if(n < 0)
    {
        cout << "-";
        imprime(-n);
    }
    else
    {
        if(n > base)
            imprime(n / base);
            cout << char(n % base + '0');
    }
}

int main(){
    imprime(-456);
    cout <<endl;

    return EXIT_SUCCESS;
}