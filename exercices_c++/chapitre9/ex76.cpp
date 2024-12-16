#include <iostream>
#include <cstdlib>
using namespace std;

class chose{
    public :
        chose(){
            cout << "création objet de type chose\n";
        }
        ~chose(){
            cout << "destruction objet de type chose\n";
        }    

};

int main() {
    chose x;
    cout << "bonjour\n";

    chose * adc = new chose;
    
    return EXIT_SUCCESS;
}