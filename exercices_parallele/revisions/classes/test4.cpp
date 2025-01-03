#include <iostream>
#include "V2f.h"

using namespace std;

ostream& operator<<(ostream& o, V2f const& v) {
         return o << '(' << v.getX() << ',' << v.getY() << ')';
        }

int main() {
    V2f v(2.f, 3.f);

    cout << "v = " << v << endl;
    cout << v << " * 6 = " << v * 6.f << endl;
    cout << "2 * " << v << " = " << 2.f * v << endl;
    v *= 4.f;
    cout << "Après *= 4, v = " << v << endl;

    return 0;
}
