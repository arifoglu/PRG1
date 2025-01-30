#include <iostream>
#include <cstdlib>
#include <vector>
#include <span>
using namespace std;

template <typename T> void afficher_element(T const& t) { cout << t;}
template <typename T> void afficher_element(const T *t) { cout << t;}

template <typename T>
void afficher_span(span<T> v){
   cout << "[";
   for(size_t i = 0; i < v.size();++i){
      if(i)
      cout << ", ";
      afficher_element(v[i]);
   }
   cout << "]";
}
template<typename T> bool comparer(const T& a, const T& b) {return a < b ;}
template<typename T> bool comparer(const T *a, const T *b) {return *a < *b ;}

template<typename T>
size_t indice_min(span<T> v){
   size_t imin = 0;
   for(size_t i = 1; i < v.size();++i){
      if(comparer(v[i],v[imin]))
      imin = i;
   }
   return imin;
}
template <typename T>
void tri_par_selection(span<T> v) {
   for (size_t i = 0; i < v.size()-1 ; ++i) {
      size_t imin = i + indice_min(v.subspan(i));
      swap(v[i], v[imin]);
   }
}

template <typename T>
vector<const T*> vecteur_de_const_pointeurs(span<T> v) {
   vector<const T*> vPtr;
   vPtr.reserve(v.size());
   for (const T& e : v) {
      vPtr.push_back(&e);
   }
   return vPtr;
}


int main() {
   vector<int> v1 {6, 2, 9, 7, 1, 3};
   span s1(v1);
   afficher_span(s1);
   cout << endl;
   tri_par_selection(s1);
   afficher_span(s1);
   cout << endl;

   const vector<int>    vInt {6, 2, 9, 7, 1, 3};
   auto vPtrInt = vecteur_de_const_pointeurs(span(vInt));
   span sPtrInt(vPtrInt);
   afficher_span(sPtrInt);
   cout << endl;
   tri_par_selection(sPtrInt);
   afficher_span(sPtrInt);
   cout << endl;   
   
   const vector<string> vStr {"chien"s, "chat"s, "souris"s, "poisson"s};
   auto vPtrStr = vecteur_de_const_pointeurs(span(vStr));
   span sPtrStr(vPtrStr);
   afficher_span(sPtrStr);
   cout << endl;
   tri_par_selection(sPtrStr);
   afficher_span(sPtrStr);
   cout << endl << endl;
   
   
   return EXIT_SUCCESS;
}