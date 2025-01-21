#include <iostream>

using namespace std;

int main() {
    short* p = new short{-1};
    cout << "p : " << p << endl;
    cout << "*p: " << *p << endl;
    cout << "---------------------"<<endl;

    short* p1 = nullptr;
    cout << "short* "<< p1 << endl; 
    cout << "short* "<< (p1+1) << endl; 
    cout << "short* "<< (p1+2) << endl; 
    return 0;
}