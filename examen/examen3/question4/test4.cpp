#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <algorithm>

using namespace std;

#include "reponse_etudiant3.cpp"

int main() {
   cout << fixed;
   
   vector<int> v1{1, 2, 5, 3, 7, 5, 0, 3, 4};
   auto v1r = n_plus_petits_elements_distincts<double>(v1.begin(), v1.end(), 4);
   for(auto e : v1r)
      cout << e << " ";
   cout << endl;

   vector<int> v2{5, 2, 5, 0, 7, 5, 0, 3, 2};
   auto v2r = n_plus_petits_elements_distincts<int>(v2.begin(), v2.end(), 5);
   for(auto e : v2r)
      cout << e << " ";
   cout << endl;

   const array<long, 11> a3{5, 2, -1, 3, 5, 0, 2, 5, 2, 3, 2};
   auto v3r = n_plus_petits_elements_distincts<int>(a3.begin(), a3.end(), 3);
   for(auto e : v3r)
      cout << e << " ";
   cout << endl;

   const list<unsigned> l4{3, 3, 3, 4, 5, 4, 5, 3, 4};
   auto v4r = n_plus_petits_elements_distincts<double>(l4.begin(), l4.end(), 5);
   for(auto e : v4r)
      cout << e << " ";
   cout << endl;
}

/*
template <typename Iterateur>
auto n_plus_petits_elements_distincts(Iterateur begin, Iterateur end, size_t n = -1) {
   vector w(begin,end);
   sort(w.begin(),w.end());
   w.erase(unique(w.begin(),w.end()),w.end());
   if(w.size() > n)
      w.resize(n);
   return w;
}

// template 1 pt
// prototype 3 pts
// copie dans un conteneur à accès direct 1 pt
// tri 1 pt
// unique 2 pts (appel et récupération de l'itérateur)
// erase 1 pt
// redimensionnement au besoin 2 pts
// retour 1 pt
*/