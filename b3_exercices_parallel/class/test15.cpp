#include <iostream>
#include <cstdlib>
using namespace std;

class Test{
    public:
        int num;

        // constructor
        Test(int n) : num(n) 
        {
                cout << "Appel constructeur num " << num << endl;
        }

        // destructor
        ~Test() 
        {
                cout << "Appel destructeur num  " << num << endl;
        }  
};


int main() {
    Test a(1);

    

    return EXIT_SUCCESS;
}
