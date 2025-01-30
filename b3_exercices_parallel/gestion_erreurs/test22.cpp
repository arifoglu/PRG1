#include <iostream>
#include <cstdlib>

using namespace std;

void f() {throw 'X';}
void g() {throw 42.0;}
void h() {throw runtime_error("Runtime error occurred!");}

int main() {
    //1)
    /*
    try {
        f();
    }
    catch (int e) {
        cout << "Catch int: " << e << endl;
    }
    catch (char e) {
        cout << "Catch char: " << e << endl;
    }
    cout << "Fin du programme" << endl;
    */

    //2)
   /*
    try{
        try {
            g();
        }
        catch (int e) {
            cout << "Catch int: " << e << endl;
        }
        catch (double e) {
            cout << "Catch double: " << e << endl;
            throw;  // İstisnayı tekrar fırlatıyoruz!
        }
    }
    catch (...) {
        cout << "Catch all" << endl;
    }
    cout << "Fin du programme" << endl;
    */

    //3)
    try {
        try {
            h();
        }
        catch (runtime_error& e) {
            cout << "Catch runtime_error: " << e.what() << endl;
            throw logic_error("Oops!");  // Yeni istisna fırlatılıyor
        }
    }
    catch (logic_error& e) {
        cout << "Catch logic_error: " << e.what() << endl;
    }

    cout << "Fin du programme" << endl;



    return EXIT_SUCCESS;
}
