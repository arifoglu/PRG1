#include <iostream>
#include <cstdlib>
using namespace std;

struct Point{
    double x, y;
    void afficher();
    void deplacer(double dx, double dy);
};
void Point::afficher(){
    cout << "(" << x << "," << y << ")" <<endl;
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
