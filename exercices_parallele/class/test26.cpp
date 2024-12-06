#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    int x, y;
    public :
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};
};
class Cercle{
    Point centre;
        int rayon;
    public :
        Cercle(int abs, int ord, int ray) : centre(abs,ord), rayon(ray) {
            cout << "construction cercle\n";
        }    
};

int main() {
    Cercle a(1,3,9);
    
    return EXIT_SUCCESS;
}


