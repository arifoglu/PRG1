#include <iostream>
#include <vector>
#include <array>
#include <iterator>
#include <cassert>

using namespace std;

class Vec3{
   private:
      array<double,3> arr;
      size_t size;
   public:
      Vec3();
      Vec3(array<double,3>::iterator first, array<double,3>::iterator last);
      Vec3(vector<double>::iterator first, vector<double>::iterator last);
      size_t getSize()const;
      friend ostream& operator<<(ostream& os, const Vec3& vec);
      double operator[](size_t i) const {return arr[i];};
      double& operator[](size_t i){return arr[i];}
      friend Vec3 operator+(const Vec3& v1, const Vec3& v2);
      Vec3& operator+=(const Vec3& autre);
      static Vec3 axis(size_t i);

};
Vec3::Vec3(): arr{0.,0.,0.}, size(arr.size()) {}
size_t Vec3::getSize()const{return size;}
Vec3::Vec3(array<double,3>::iterator first, array<double,3>::iterator last){
   size_t i =0;
   for(auto it = first; it != last && i <arr.size();++it,++i){
      arr[i] = *it;
   }
   size = arr.size();
}
Vec3::Vec3(vector<double>::iterator first, vector<double>::iterator last){
   size_t i =0;
   for(auto it = first; it != last && i <arr.size();++it,++i){
      arr[i] = *it;
   }
   size = arr.size();
}

ostream& operator<<(ostream& os, const Vec3& vec){
   os << "(";
   for(size_t i = 0; i < vec.arr.size();++i){
      
      os << vec.arr[i] ;
      
      if(i < vec.arr.size() - 1) os << ", ";
   }
   os << ")";
   return os;
}
Vec3 operator+(const Vec3& v1, const Vec3& v2){
   Vec3 result;
   for(size_t i = 0; i < 3; ++i){
      result[i] = v1[i] + v2[i];
   }
   return result;
}
Vec3& Vec3::operator+=(const Vec3& autre){
   for(size_t i = 0; i < 3; ++i){
      this->arr[i] += autre[i];
   }
   return *this;
}
Vec3 Vec3::axis(size_t i){
   assert(i < 3);
   Vec3 v{};
   v[i] = 1.;
   return v;
}


int main() {
   Vec3 v1{};
   cout << "v1 = " << v1 << endl;

   v1[2] = 2;
   cout << "v1 = " << v1 << endl;

   array a{1., 3., 2.};
   const Vec3 v2(a.begin(),a.end());
   cout << "v2 = " << v2 << endl;

   for (size_t i = 0; i < 3; ++i)
      cout << "v2[" << i << "] = " << v2[i] << ((i < 2) ? ", " : "\n");

   vector b{4., 2., 5.};
   Vec3 v3(b.begin(), b.end());
   cout << "v3 = " << v3 << endl;

   Vec3 v4 = v2 + v3;
   cout << "v4 = " << v4 << endl;

   v4 += v2;
   cout << "v4 = " << v4 << endl;

   Vec3 x = Vec3::axis(0);
   cout << "x = " << x << endl;
   Vec3 y = Vec3::axis(1);
   cout << "y = " << y << endl;
   Vec3 z = Vec3::axis(2);
   cout << "z = " << z << endl;
}