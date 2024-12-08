#include <iostream>
#include "point.h"
using namespace std;

int main() {

   Point p1(1.2, 2.4);
   Point p2(3., 4.2);

   cout << "p1" << p1 << ", p2" << p2 << endl;

   cout << "p1 + p2 = " << p1 + p2 << endl;
   cout << "p2 + p1 = " << p2 + p1 << endl;

   cout << "p1 * 2. = " << p1 * 2. << endl;
   cout << "3. * p1 = " << 3. * p1 << endl;

   cout << (p1 == p2 ? "p1 == p2" : "p1 != p2") << endl;
   Point p3(p1);
   cout << (p1 == p3 ? "p1 == p3" : "p1 != p3") << endl;
}