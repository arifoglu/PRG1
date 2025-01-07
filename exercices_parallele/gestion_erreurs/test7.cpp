#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        throw int(42);
    }
    catch (const exception& e) {
    cout << "Exception standard" << endl;
    }
    catch (...) {
    cout << "Exception non standard" << endl;
    }
}
