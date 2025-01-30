#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <span>
using namespace std;

template <typename T>
using Ligne = vector<T>;

template <typename T>
using Matrice = vector<Ligne<T>>;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> & v){
   os << "[";
   for(size_t i = 0; i < v.size();++i){
      if(i){
         os << v[i];
      }
   }
   os << "]";
   return os;
}

int main() {
   Matrice<int> m {{0},
                {1, 2},
                {3, 4, 5},
                {6, 7, 8, 9}};

   cout << m;

   return EXIT_SUCCESS;
}