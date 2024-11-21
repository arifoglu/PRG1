#include <iostream>
#include <cstdlib>
using namespace std;

void test(int n = 0,double x = 0);         // I
void test(double y = 0,int p = 0);         // II

int main() {
    int n;
    double z;
    
    //test(n,z); // num I
    //test(z,n); // num II
    //test(n);     // num I
    //test(z);     // num II
    //test();         // error

    return EXIT_SUCCESS;
}

void test(int n,double x){
    cout << "test numero I a = " << n << endl;
    cout << "test numero I b = " << x << endl;
}
void test(double y,int p){
    cout << "test numero II a = " << y << endl;
    cout << "test numero II a = " << p << endl;
}
