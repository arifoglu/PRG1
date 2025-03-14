#include <iostream>

using namespace std;

int f1(int a);
int f2(int a);

int main() {
    int a;
    
    cout << "donnez un entier : ";
    cin >> a;
    f1(a);

    if(f1(a))           cout << "il est pair\n";
    if(f2(a))           cout << "il est multiple de 3\n";
    if(f1(a) && f2(a))  cout << "il est divisible par 6\n";

    return 0;
}
int f1(int a){
    if(a % 2 == 0)
        return 1;
    return 0;
}
int f2(int a){
    if(a % 3 == 0)
        return 1;
    return 0;
}
