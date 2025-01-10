#include <iostream>

using namespace std;

class Point {
   double x, y;
#include "reponse_etudiant1.cpp"
};

int main() {
   Point p1{2,3};
   const Point p2{4,1};
   p1 += p2;
   Point p3 = p2 + p1;
   cout << p1 << "\n" << p2 << "\n" << p3 << endl;
}
/*
public :
  Point(double a, double b):x(a), y(b) {}
  
  Point& operator+=(Point const& rhs) {
     x += rhs.x;
     y += rhs.y;
     return *this;
  }

  friend Point operator+(Point lhs, Point const& rhs){
     return lhs += rhs;
  }

  friend ostream& operator<<(ostream& os, Point const& p) {
    return os << "(" << p.x << "," << p.y << ")";
  }

  // Constructeur 2pts
  // Opérateur += 4pts
  // Opérateur + 3pts
  // Opérateur << 5pts
  }
*/