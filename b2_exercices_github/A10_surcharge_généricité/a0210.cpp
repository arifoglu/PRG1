#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include <string>
#include <span>
using namespace std;

template <typename T, size_t taille>
using Ligne = array<T, taille>;

template <typename T, size_t nb_ligne, size_t nb_colonne>
using Matrice = array<Ligne<T, nb_colonne>,nb_ligne>;

// avec la boucle for ( ; ; )
template<typename T, size_t nb_ligne, size_t nb_colonne>
T somme1(const Matrice<T, nb_ligne, nb_colonne>& matrice) {
   T resultat = T();
   for (size_t i_ligne = 0; i_ligne < nb_ligne; ++i_ligne)
      for (size_t i_colonne = 0; i_colonne < nb_colonne; ++i_colonne)
         resultat += matrice[i_ligne][i_colonne];
   return resultat;
}
// avec la boucle fo( : )
template<typename T, size_t nb_ligne,size_t nb_colonne>
T somme2(const Matrice<T, nb_ligne,nb_colonne>& matrice){
   T resultat = T();
   for(const auto & ligne : matrice){
      for(const auto elem : ligne)
      resultat += elem;
   }
   return resultat;
}

int main() {
    using Matrice_int_2x3    = Matrice <int,    2, 3>;
    using Matrice_double_3x2 = Matrice <double, 3, 2>;

   Matrice_int_2x3 m1      {{{{ 0,  1,  2}},
                           {{10, 11, 12}}}};

   Matrice_double_3x2 m2    {{{{0.0, 1.1}},
                              {{1.0, 1.1}},
                              {{2.0, 2.1}}}};

   cout << somme1(m1) << " " << somme2(m1) << endl;
   cout << somme1(m2) << " " << somme2(m2) << endl;

   return EXIT_SUCCESS;
}