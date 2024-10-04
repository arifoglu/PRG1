#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a = 2;
    cout << " 1- reference "<< a << " "<< &a<<endl;
    const int* ptr = &a;
    cout << " 2- reference "<< a << " "<< &a<<endl;
    cout << " 3- adress "<< a << " "<< *ptr<<endl;
    int* ptr2 = &a;
    cout << " 4- reference "<< a << " "<< &a<<endl;
    cout << " 5- adress "<< a << " "<< &a<<endl;
    cout << " 6- adress "<< a << " "<< *ptr2<<endl;


    return EXIT_SUCCESS;
}