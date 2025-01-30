#include <iostream>
#include <cstdlib>

using namespace std;

void f(){
    throw "hello";
}

int main() {
    try{
        f();
    }
    catch(const char* e){
        cout << "error attrapé :" << e << endl;
    }
    

    return EXIT_SUCCESS;
}

