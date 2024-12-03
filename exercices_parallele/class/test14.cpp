#include <iostream>
#include <cstdlib>
using namespace std;

class C {
    double d;
    public:
        C(double _d) : d(_d){
            cout << "d";
        }
        explicit C(int i ) : d(i) {
            cout << "i";
        }
    void affiche(){
        cout << d << endl;
    }    
};


int main() {
    C c1 = 2.3;
    C c2 = 3;

    return EXIT_SUCCESS;
}
