#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int x = 5;
    assert(x > 0);
    cout << "continue.." << endl;
    int y = -3;
    assert(y > 0);
    cout << "ce message ne sera affiché!!";
}
