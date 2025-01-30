#include <iostream>

using namespace std;

int main() {
    int* p = new int(10);
    cout << "p: " << *p << endl; //&(*p) = 0x150e05e70 // adres ayni
    delete p; 
    cout << "p: " << *p << endl; //&(*p) = 0x150e05e70 // adres ayni
    return 0;
}
/