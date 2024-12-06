#include <iostream>
#include <cstdlib>
#include <compare>
using namespace std;

class Fonction{
    public:
        bool operator()(double x){
            return x > 0;
        }
};

int main() {
    Fonction t;
    
    if(t(2.5)){
        cout << "t positif" << endl;
    }

    return EXIT_SUCCESS;
}


