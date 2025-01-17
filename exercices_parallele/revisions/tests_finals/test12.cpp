#include <iostream>
#include <vector>
#include <iomanip>
#include <span>
using namespace std;

template<typename T, size_t taille>
using Ligne = array<T, taille>;

template<typename T, size_t nb_ligne, size_t nb_colonne>
using Matrice = array<Ligne<T, nb_colonne>, nb_ligne>;

template<typename T,size_t nb_ligne, size_t nb_colonne>
ostream& operator<<(ostream& os, const Matrice<T, nb_ligne, nb_colonne>& matrice){
   for(size_t i = 0; i < nb_ligne; ++i){
      os << "[";
      for(size_t j = 0; j < nb_colonne; ++j){
         os << matrice[i][j] << ", ";
      }
      os << "]";
   }
   return os;
}

template<typename T, size_t taille>
ostream& operator<<(ostream& os, const array<T,taille>& arr){
   os << "[";
   for(size_t i = 0; i < arr.size();++i){
      os << arr[i] << ", ";
   }
   os << "]";
   return os;
}

int main() { 
   array<array<int, 3>, 2> m1 = {1, 2, 3, 4, 5, 6}; 
   cout << m1 << "\n\n"; 
 
   cout << m1[0] << " ... " << m1[1] << "\n\n"; 
 
   array<array<double, 4>, 3> m2 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
   cout << m2; 
}
