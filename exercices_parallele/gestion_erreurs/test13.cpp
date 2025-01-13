#include <iostream>
#include <cassert>
using namespace std;

void check(int x){
    assert(x > 0);
    cout << "x is valid : " << x << endl;
}

int main() {
    check(10);
    check(-5);
    return 0;
}
