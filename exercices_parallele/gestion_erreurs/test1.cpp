#include <iostream>
#include <stdexcept>
using namespace std;

int surface(int a, int b){
    if(a <= 0 || b <= 0)
        throw invalid_argument("a et b doivent être positives!!");
    return a * b;
}
int main() {
    try{
        cout << surface(-4,10) << endl;
    }
    catch(const invalid_argument& e){
        cerr << "exception attrapée : " << e.what() <<endl; 
    }
}