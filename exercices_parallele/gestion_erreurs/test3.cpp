#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    /////////////////////////////////
    //affiche => hello
    {
    try{
        throw out_of_range("Hello");
    }
    catch(exception& e){
        cout << e.what() << endl;
    }
    }
    //////////////////////////////////
    //affiche => std::exception
    {
    try{
        throw out_of_range("Hello");
    }
    catch(exception e){
        cout << e.what() << endl;
    }
    }
}
