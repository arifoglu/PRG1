#include "comb_sort.hpp"

template <typename T> void comb_sort(T start, T end){
  //les meilleures valeurs
  double shrink = 1.3;  
  size_t min_gap = 1;
  
  size_t gap = static_cast<size_t> (end - start);

  // trier grossièrement avec un peigne aux dents écartées
  while (gap > min_gap) { 
    //  gap *= shrink;        
    // Diminuer l'écart des dents du peigne
    gap = static_cast<size_t>(gap / shrink); 
    
    for (T i = start; i + gap < end; ++i){
        if (*(i + gap) < *i){
            std::swap(*i, *(i + gap));
        } 
    }
  }
  // Appliquer un tri  par insertion standard
  for (T i = start + 1; i < end; ++i) { 
    auto tmp = *i;
    T j = i;
    while (j > start and *(j-1) > tmp) {
      *j = *(j - 1);
      --j;
    }
    *j = tmp;
  }
}

///instanctiation explicite
// *int
template void comb_sort<int*>(int* start, int* end);
// vector<int>
template void comb_sort<std::vector<int>::iterator>(std::vector<int>::iterator start, std::vector<int>::iterator end);