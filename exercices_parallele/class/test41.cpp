#include <iostream>
#include <cstdlib>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int abs = 0, int ord = 0) : x(abs) , y(ord) {};

        //prefix ++i
        Point& operator++(){
            ++x;
            return *this;
        }
        //prefix --i
        Point& operator--(){
            --x;
            return *this;
        }

        void affiche() const {
            cout << "coordonnees : " << "(" << x << "," << y << ")\n" <<endl; 
        } 
};


int main() {
    // i++
    Point p1(3,4);
    p1.affiche();           // p1(3,4) 
    
    Point p2 = ++p1;       // p1.x'in referansini aldi ++ uyguladi p1.x'i artirdi => p2.x e verdi.  

    p2.affiche();          //  p2(4,4)    
    p1.affiche();          //  p1(4,4)   

    // i--
    p1.affiche();           // p1(4,4) 
    
    Point p3 = --p1;       //  p1.x'in referansini aldi -- uyguladi p1.x'i azaltti=> p2.x e verdi

    p3.affiche();          //  p2(3,4)    
    p1.affiche();          //  p1(3,4)

    return EXIT_SUCCESS;
}


