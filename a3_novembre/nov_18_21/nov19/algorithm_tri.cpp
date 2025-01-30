#include "algorithm_tri.hpp"

//comb_sort
void comb_sort(vector<int> & v, double shrink, size_t min_gap) {
  size_t gap = v.size();

  // trier grossièrement avec un peigne aux dents écartées
  while (gap > min_gap) { 
    //  gap *= shrink;        
    // Diminuer l'écart des dents du peigne
    gap = static_cast<size_t>(gap / shrink); 
    
    for (size_t i = 0; i + gap < v.size(); ++i){
        if (v[i + gap] < v[i]){
            swap(v[i], v[i+gap]);
        } 
    }
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

//insertion_sort
void insertion_sort(std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); ++i) {
        auto tmp = v[i];
        size_t j = i;
        while (j > 0 && v[j - 1] > tmp) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = tmp;
    }
}

//tri fusion
void tri_fusion(vector<int> &v) {
    if (v.size() < 2) return; 
    // Diviser en deux parties
    vector<int> va(v.begin(), v.begin() + v.size() / 2);
    vector<int> vb(v.begin() + v.size() / 2, v.end());
    //Trier sous-vecteur
    tri_fusion(va);
    tri_fusion(vb); 
    // Fusionner des vecteurs triés
    v = fusion(va, vb);
}
vector<int> fusion(const vector<int>& va, const vector<int>& vb) {
    vector<int> result;
    size_t i = 0, j = 0;
    
    while (i < va.size() && j < vb.size()) {
        if (va[i] < vb[j]) {
            result.push_back(va[i]);
            ++i;
        } else {
            result.push_back(vb[j]);
            ++j;
        }
    }

    while (i < va.size()) {
        result.push_back(va[i]);
        ++i;
    }
    while (j < vb.size()) {
        result.push_back(vb[j]);
        ++j;
    }

    return result;
}

//pour tester la fonction du comb_sort
void test_algorithm(vector<int>& data, double shrink, size_t min_gap, void (*sort_func)(vector<int>&, double, size_t)){
    //pour conserver les donnees
    vector<int> test_data = data;
    //commencer la mesure du temps
    clock_t debut = clock();
    //appeller la fonction de trie
    sort_func(test_data,shrink,min_gap);
    //terminer la mesure du temps    
    clock_t fin = clock();
    //calculer la duree
    double duree = double(fin - debut) / CLOCKS_PER_SEC;

    cout << "Les donnes sont triées : ";
    for(int val : test_data){
        cout << val << " ";
    } 
    cout << endl; 
    cout << "Comb_Sort              : " << fixed << duree << " seconds" << endl;

}

//pour tester la fonction d'insertion_sort
void test_algorithm_insertion(vector<int>& data, void (*sort_func)(std::vector<int>&)){
    //pour conserver les donnees
    vector<int> test_data = data;
    //commencer la mesure du temps
    clock_t debut = clock();
    //appeller la fonction de trie
    sort_func(test_data);
    //terminer la mesure du temps    
    clock_t fin = clock();
    //calculer la dure
    double duree = double(fin - debut) / CLOCKS_PER_SEC;  

    cout << "Les donnes sont triées : ";
    for(int val : test_data){
        cout << val << " ";
    }
    cout << endl;
    cout << "Insertion_sort         : " << fixed << duree << " seconds" << endl;

}

//pour tester tri fusion
void test_algorithm_fusion(vector<int>& data, void (*sort_func)(vector<int>&)){
    //pour conserver les donnees
    vector<int> test_data = data;
    //commencer la mesure du temps
    clock_t debut = clock();
    //appeller la fonction de trie
    sort_func(test_data);
    //terminer la mesure du temps    
    clock_t fin = clock();
    //calculer la dure
    double duree = double(fin - debut) / CLOCKS_PER_SEC;  

    cout << "Les donnes sont triées : ";
    for(int val : test_data){
        cout << val << " ";
    }
    cout << endl;
    cout << "Tri fusion             : " << fixed << duree << " seconds" << endl;
}