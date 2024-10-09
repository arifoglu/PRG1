#include <iostream>
#include <cstdlib>

using namespace std;

int fibo(int number){
    int n1 = 0;
    int n2 = 1;
    int n3;
    for(int i = 0; i < number; ++i){
        n3 = n2 + n1;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

int main(){
    int number;
    cout << "Enter a number : ";
    cin >> number;
    fibo(number);
    cout << endl;
    return EXIT_SUCCESS;
}