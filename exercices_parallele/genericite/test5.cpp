#include <iostream>
#include <cstdlib>
using namespace std;

void essai(int,double); // I
void essai(double,int); // II

int main(){ 
    int n;
    int p;
    double z;
    char c;
    
    //essai(n,z);         // num I
    //essai(c,z);         // num I
    //essai(n,p);         // error
    //essai(c,c);         // error
    //essai(z,z);         // error
    //essai(z,c);         // num II


    return EXIT_SUCCESS;
}

void essai(int a,double b){
    cout << "essai numero I a = " << a << endl;
    cout << "essai numero I b = " << b << endl;
}
void essai(double a,int b){
    cout << "essai numero II a = " << a << endl;
    cout << "essai numero II a = " << b << endl;
}