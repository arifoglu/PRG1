#include <iostream>
#include <cstdlib>
using namespace std;

class A;
class B{
    int a;
    friend A;
};
class A{
    public:
        void f(B & b){
            b.a = 42;
        }
};

int main() {
    
    return EXIT_SUCCESS;
}
