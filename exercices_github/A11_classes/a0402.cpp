#include <iostream>
#include <cstdlib>
#include <utility>
#include <iomanip>
using namespace std;

class MonEntier{
   private:
      int x;
   public:
      MonEntier(int p = 0) : x(p) {};

      friend ostream& operator<<(ostream& os, const MonEntier& p); 

      friend bool operator==(const MonEntier& p1, const MonEntier & p2);  

      friend bool operator!=(const MonEntier& p1, const MonEntier& p2);

      friend MonEntier operator+(const MonEntier& p1,const MonEntier& p2);

      friend MonEntier& operator+=(MonEntier & p1,const MonEntier& p2);

      MonEntier operator++(int) {
         MonEntier temp = *this;
         x++;
         return temp;
      }
      MonEntier& operator++(){
         ++x;
         return *this;
      }
};
ostream& operator<<(ostream& os, const MonEntier& p){
   os << "n = " << p.x ;
   return os;
}   
bool operator==(const MonEntier& p1,const MonEntier & p2){
   return (p1.x == p2.x);
}
bool operator!=(const MonEntier& p1,const MonEntier& p2){
   return (p1.x != p2.x);
}

MonEntier operator+(const MonEntier& p1,const MonEntier& p2){
   return (p1.x + p2.x);
}
MonEntier& operator+=(MonEntier& p1,const MonEntier& p2){
   p1.x += p2.x;
   return p1;
}

int main() {

   MonEntier m0, m1(1), m2 = 5;
   const MonEntier m3{7};

   cout << m0 << endl
        << m1 << endl;
   
   cout << boolalpha;
   cout << (m0 == m1) << endl;
   cout << (m0 != m1) << endl;   
   cout << noboolalpha;
   
   cout << m1++ << endl;
   cout << m1 << endl;
   cout << ++m1 << endl;
   
   cout << m1 + m2 << endl;
   m1 += m2;
   cout << m1 << endl;
   cout << m3 + m2 << endl;
}