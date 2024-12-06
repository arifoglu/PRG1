#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};

        //postfix(i++) 
        Point operator++(int){
            Point temp = *this ; // bu objet sakla
            x++;
            return temp;
        } 
        Point operator--(int){
            Point temp = *this;
            x--;
            return temp;
        }

        void affiche() const {
            cout << "coordonnees : " << "(" << x << "," << y << ")\n" <<endl; 
        } 
};


int main() {
    // i++
    Point p1(3,4);
    p1.affiche();           // p1(3,4) 
    
    Point p2 = p1++;       //  p1 x degerini aldi kopyaladi,p2 objesine.Sonra ++ calisti p1x 4oldu

    p2.affiche();          //  p2(3,4)    
    p1.affiche();          //  p1(4,4)   

    // i--
    p1.affiche();           // p1(3,4) 
    
    Point p3 = p1--;       //  p1 x degerini aldi kopyaladi p2 objesine.Sonra -- calisti p1x 3 oldu

    p3.affiche();          //  p2(3,4)    
    p1.affiche();          //  p1(3,4)

    return EXIT_SUCCESS;
}


