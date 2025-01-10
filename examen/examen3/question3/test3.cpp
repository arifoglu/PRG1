#include <iostream>

using namespace std;

struct Point {
   double x, y;
};

#include "reponse_etudiant2.cpp"

void show(const MultiLine& multiline) {
   cout << "Nbre de segments : " 
        << multiline.get_nr_of_segments()
        << " / Longueur : " 
        << multiline.get_length() 
        << endl;
}

int main() {
   Point p1{2,3};
   const Point p2{5,3};
   Point p3{5,7};

   MultiLine multiline;
   show(multiline);
   multiline.add_point(p1); // multiline n'a pas de segment
   show(multiline);
   multiline.add_point(p2); // multiline a le segment p1-p2
   show(multiline);
   multiline.add_point(p3); // multiline a les segments p1-p2 et p2-p3
   show(multiline);
   multiline.add_point(p1); // multiline a les segments p1-p2, p2-p3, et p3-p1
   show(multiline);
}

/*
#include <math.h>
#include <vector>

class MultiLine {
   vector<Point> pts;
   
  public:

   void add_point(Point const & p) {
      pts.push_back(p);
   }

   size_t get_nr_of_segments() const {
      if(pts.size() < 2)
         return 0;
      return pts.size() - 1; 
   }

   double get_length() const {
      if(pts.size() < 2)
         return 0;
      double d = 0.0;
      for(size_t i = 1; i < pts.size(); ++i)
         d += hypot(pts[i].x - pts[i-1].x, pts[i].y - pts[i-1].y);
      return d;
   }
};

// Inclusions 1 pt
// Donnée membre 1 pt
// add_point prototype 2 pts
//           corps 1 pt
// get nr segments prototype 2 pts
//                 corps 3 pts
// get length prototype 1 pt
//            corps 4 pts


*/