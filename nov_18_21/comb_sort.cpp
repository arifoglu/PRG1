void comb_sort(vector<int> & v, double shrink, size_t min_gap) {
  size_t gap = v.size();
  
  // trier grossièrement avec un peigne aux dents écartées
  while (gap > min_gap) { 
    gap *= shrink;        // Diminuer l'écart des dents du peigne
    for (size_t i = 0; i < v.size() - gap; ++i) 
      if (v[i + gap] < v[i]) 
        swap(v[i], v[i+gap]);
      
  }
  
  // Appliquer un tri  par insertion standard
  for (size_t i = 1; i < v.size(); ++i) { 
    auto tmp = v[i];
    size_t j = i;
    while (j > 0 and v[j-1] > tmp) {
      v[j] = v[j - 1];
      --j;
    }
    v[j] = tmp;
  }
}

