#include <iostream>
#include <cstdlib>
using namespace std;

class Test{
    public:
        int num;

        // constructor
        Test(int) ; 

        // destructor
        ~Test();   
};

Test::Test(int n) : num(n) {
    cout << "Appel constructeur num " << num << endl;
}
Test::~Test() {
    cout << "Appel destructeur num  " << num << endl;
}
int main() {
    Test a(1);
    

    return EXIT_SUCCESS;
}
