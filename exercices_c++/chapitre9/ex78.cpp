#include <iostream>
#include <cstdlib>
using namespace std;

class Point{
    private:
        int num;
        static int count;
    public:
        Point();
        ~Point();

};
int Point::count = 0;

Point::Point(){
    cout << "creation point numero " << ++count << endl;
}
Point::~Point(){
    cout << "destruction point numero " << count-- << endl;
}

int main() {
    Point * p = new Point[4];
    delete [] p;

    return EXIT_SUCCESS;
}

