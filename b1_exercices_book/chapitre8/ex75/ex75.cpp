#include <iostream>
using namespace std;

class Point{
    private:
        float x, y;
        static int count;
    public:
        Point(float,float);
        ~Point();
        void deplace(float,float);
        void affiche()const;

        static int compte();
};
int Point::count = 0;

Point::Point(float abs, float ord){
    x = abs;
    y = ord;
    count++;
}
Point::~Point(){
    count--;
}

void Point::deplace(float dx,float dy){
    x += dx;
    y += dy;
}
void Point::affiche()const{
    cout << "objet "<< count << " : " ;
    cout << "(" << x << "," << y << ")" <<endl;
}

int Point::compte(){
    return count;
}

int main () {
    Point p1(1,6);
    p1.affiche();
    Point p2(3,8);
    p2.affiche();

    cout << Point::compte() << " objets \n";
    return 0;
}