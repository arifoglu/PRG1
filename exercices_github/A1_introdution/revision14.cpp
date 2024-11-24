#include <iostream>
#include <cstdlib>
#include <span>
using namespace std;

string to_string(span<const int> v){
    string result = "[";
    for(size_t i = 0; i < v.size();++i){
        if(i != v.size() - 1)
            result += to_string(v[i]) + ',';
        if(i == v.size() - 1)
            result += to_string(v[i]);
    }
    result += "]";
    return result;
}
//void remplacer_valeurs_paires(span<int> v,int val){
//    size_t write_idx = 0;
//    for(size_t read_idx = 0; read_idx < v.size();++read_idx){
//        if(v[read_idx] % 2 == 0){
//            v[read_idx] = val;
//        }
//    }
//}

//bool est_strictement_croissant(span<const int> s){
//    for(size_t i = 0; i < s.size();++i){
//        if(s[i] <= s[i-1]){
//            return false;
//        }
//    }
//    return true;
//}

//bool inclut(span<const int> s,int val){
//    for(int e : s){
//        if(e == val)
//        return true;
//    }
//    return false;
//}

//vector<int> ensemble(span<const int> s){
//    vector<int> v;
//    for(int e : s){
//        if(!inclut(v,e)){
//            v.push_back(e);
//        }
//    }
//    return v;
//}

//void inserer_dernier_element(span<int> s){
//    if(s.empty()) return;
//    int e = s.back();
//    size_t i = s.size() - 1;
//    while(i > 0 && s[i-1]){
//        s[i] = s[i-1];
//        --i;
//    }
//    s[i] = e;
//}

int main() {
    //1)span
    //vector v{1,2,3,4,5,6,7,8};
    //span s{v.data(),3};
    //for(int e : s) cout << e ;
    //vector v{1,2,3,4,5,6,7,8};
    //span s{v.data()+ 2,4};
    //for(int e : s) cout << e ;
    //vector v{1,2,3,4,5,6,7,8};
    //span s{v};
    //for(int e : s.subspan(3,2)) cout << e ;
    //array a{1,2,3,4,5,6,7,8};
    //span s{&a[3],4};
    //for(int e : a) cout << e;
    //array a{1,2,3,4,5,6,7,8};
    //span s{a.data()+ 4,5};//5678indetermine
    //for(int e : s) cout << e ;
    //vector v { 1, 2, 3, 4, 5, 6, 7, 8};
    //span s {v.data() + 5, 7};
    //for(size_t i = 0; i < s.size(); ++i)// 6780000
    //   cout << s[i] << ' ';   
    // no 7
    //vector v { 1, 2, 3, 4, 5, 6, 7, 8};
    //span s {v.data() + 5, 7};
    //for(size_t i = 0; i < s.size(); ++i)
    //cout << s.at(i) << ' ';// n'existe pas en c++20
   ///// 
   //int t[10]               = {1, 2, 3, 4, 5, 6};
   //const array<int, 10> a  = {1, 2, 3, 4, 5, 6};
   //vector<int> v           = {1, 2, 3, 4, 5, 6};
   //cout << to_string(t) << endl;
   //cout << to_string(a) << endl;
   //cout << to_string(v) << endl;
   //////
   //vector v { 1, 2, 3, 4, 3, 6, 4, 1, 2};
   //cout << to_string(v) << " -> ";
   //remplacer_valeurs_paires(v, 0);
   //cout << to_string(v) << endl;
   //vector a { 3, 4, 5, 6, 2, 4, 3};
   //cout << to_string(a) << " -> ";
   //remplacer_valeurs_paires(a, -1);
   //cout << to_string(a) << endl;
    ///
   // for (vector<int> const& v:
   //        {vector<int>{1, 2, 3, 4, 6, 9},
   //         {1, 2, 3, 4, 6, 5},
   //         {1, 2, 3, 3, 4, 4},
   //         {1},
   //         {}})
   //   cout << to_string(v)
   //        << (est_strictement_croissant(v) ? " est" : " n'est pas")
   //        << " strictement croissant" << endl;
   //array a { 2, 3, 5, 7, 11, 13};
   //cout << to_string(a)
   //     << (est_strictement_croissant(a) ? " est" : " n'est pas")
   //     << " strictement croissant" << endl;

  //  for (vector<int> const& v:
  //         {vector<int>{ 1, 2, 4, 1, 2, 5, 3, 6, 2, 1},
  //          {1, 1, 1, 1, 1, 1},
  //          {1, 2, 3, 4},
  //          {1},
  //          {}
  //         })
  //    cout << to_string(v) << " -> " << to_string(ensemble(v)) << endl;
  // array a {1, 3, 2, 4, 2, 1, 3};
  // cout << to_string(a) << " -> " << to_string(ensemble(a)) << endl;

  ////
    for (vector<int> const& v:
           {vector<int>{ 1, 2, 4, 1, 2, 5, 3, 6, 2, 1},
            {1, 1, 1, 1, 1, 1},
            {1, 2, 3, 4},
            {1},
            {}
           })
      cout << to_string(v) << " -> " << to_string(ensemble(v)) << endl;

   array a {1, 3, 2, 4, 2, 1, 3};
   cout << to_string(a) << " -> " << to_string(ensemble(a)) << endl;

    return EXIT_SUCCESS;
}