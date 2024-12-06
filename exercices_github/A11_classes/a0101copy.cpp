#include <iostream>
#include <cstdlib>
using namespace std;

struct Point{
    double x = 0, y = 0;
    void afficher() const;
    void deplacer(double,double);
};
void Point::afficher() const{
    cout << "(" << x << "," << y << ")\n";
}
void Point::deplacer(double dx, double dy){
    x += dx;
    y += dy;
}


int main() {
   Point centre{};
   centre.afficher();

   Point p{1.2, 2.4};
   p.afficher();
   p.deplacer(0.8, 0.6);
   p.afficher();

   p.x = 5.5;
   p.y = 10.3;
   cout << p.x << " -- " << p.y << endl;

   return EXIT_SUCCESS;
}
