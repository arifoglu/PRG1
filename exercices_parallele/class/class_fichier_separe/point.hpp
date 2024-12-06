#ifndef POINT
#define POINT

class Point {
    private:
        int x , y;
    public:
        //constructor
        Point(int abscisse, int ordonnee) : x(abscisse) , y(ordonnee) {}

        // fonctionnes
        void deplace(int dx, int dy);
        void affiche()const;

};

#endif