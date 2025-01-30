#include <iostream>
#include <stdexcept>
using namespace std;

struct A{
    int i;
    ~A() {cout << "D(" << i << ") ";}
};

int main() {
    try{
        A a1{1};
        throw exception();
    }
    catch(exception& e){
        cout << "catch";
    }
    cout << "fin " << endl;
}
