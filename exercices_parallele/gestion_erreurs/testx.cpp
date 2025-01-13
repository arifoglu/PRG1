#include <iostream>
#include <stdexcept>
using namespace std;

struct A{
    int i;
    ~A() {cout << "D(" << i << ") ";}
};

void g(){A a{1}; throw exception();}

void f(){A a{2}; g();}

int main() {
    try{
        A a1{3};f();
    }
    catch(int& e){
        cout << "catch";
    }
    cout << "fin " << endl;
}
