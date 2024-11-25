#include <iostream>
#include <array>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;

//string to_string(const vector<int> & v){
//    string str = "[";
//    for(size_t i = 0; i < v.size();++i){
//        if(i != v.size() - 1)
//        str += to_string(v[i]) + ' ';
//        if(i == v.size() - 1)
//        str += to_string(v[i]);
//    }
//    str += "]";
//    return str;
//}

//void rotate_right(vector<int> & v){
//    if(v.empty()) return;
//
//    //initialiser le vector vide la meme taille
//    vector<int> vR(v.size());
//    vR[0] = v[v.size() - 1];
//
//    for(size_t i = 0; i < v.size() - 1;++i){
//        vR[i+1] = v[i];
//    }
//    v = vR;
//}

//void supprimer_centre(vector<int> & v){
//    if(v.empty()) return;
//    
//    int index_milieu = v.size() / 2;
//
//    if(v.size() % 2 == 0){
//        v.erase(v.begin() + index_milieu-1 , v.begin()+ index_milieu + 1);
//    }else{
//        v.erase(v.begin()+index_milieu);
//    }
//    for(size_t e : v)
//    cout << e << " ";
//    cout << endl;
//}

//void supprimer_centre2(vector<int> & v){
//    if(v.empty()){return ;}
//
//    size_t n = 2 - v.size() % 2;
//
//    for(size_t i = 1 + v.size() / 2 ; i < v.size();++i){
//        v[i - n] = v[i];
//    }
//    v.resize(v.size() - n);
//}

///
//void supprimer_valeur(vector<int> & v, int val){
//    size_t write_idx = 0;
//    for(size_t read_idx = 0; read_idx < v.size();++read_idx){
//        if(v[read_idx] != val){
//            v[write_idx] = v[read_idx];
//            ++write_idx;
//        }
//    }
//    v.resize(write_idx);
//}

int main() {
    //////to_string
    //const vector<int> v = {1,2,3,4,5,6};
    //cout << to_string(v);
    
    ////rotate_right
    //vector<int> v ={1,2,3,4,5,6,7,8,9};
    //for(int e : v)
    //cout << e << ' ';
    //cout << endl;
    //rotate_right(v);
    //for(int e : v)
    //cout << e << ' ';

    ////supprimer_centre
    //vector<int> vec1{1,2,3,4,5,6};
    //supprimer_centre(vec1);
    ///supprimer_centre2
   //for (vector<int> v: {vector<int>{},
   //                     {1},
   //                     {1, 2},
   //                     {1, 2, 3},
   //                     {1, 2, 3, 4},
   //                     {1, 2, 3, 4, 5},
   //                     {1, 2, 3, 4, 5, 6}}) {
   //   cout << to_string(v) << " -> ";
   //   supprimer_centre2(v);
   //   cout << to_string(v) << endl;
   //}
    
   //supprimer une valeur
   //1)first element delete
   //vector<int> v{1,2,3,4,5};
   //v.erase(v.begin());// first element delete
   //for(auto e : v) //cout << e ;
   //2)index 3 delete
   //vector<int> v{1,2,3,4,5};
   //v.erase(v.begin() + 3);
   //for(int e : v) cout << e;  
   //3) numero "3" delete.(firstly searching then delete that)
   //vector<int> v{1,2,3,4,5};
   //auto it = find(v.begin(),v.end(),3);
   //if(it != v.end()) v.erase(it);
   //for(auto e : v) cout << e; 
   //4) numero "3" delete.(multidimensionnel)
   //vector<vector<int>> v{{10,20,3},{1,2,3,4,5}};
   //auto & inner_vector = v[0];
   //auto it = find(inner_vector.begin(),inner_vector.end(),3);
   //if(it != inner_vector.end()) inner_vector.erase(it);
   //for(auto & e : v){
   // for(auto k : e){
   //     cout << k;
   // }
   // cout << endl;
   //} 
   //5)
   //vector<vector<int>> v{{10,20,3},{1,2,3,4,5}};
   //for(auto & inner_vector : v) {
   //     auto it = find(inner_vector.begin(),inner_vector.end(),3);
   //     if(it != inner_vector.end())
   //         inner_vector.erase(it);
   //}
   //for(auto & inner_vector : v){
   //     for(auto & e : inner_vector){
   //         cout << e ;
   //     }
   //     cout << endl;
   //}
   //vector<vector<int>> v{{10,20,2,3,5},{1,2,3,4,5}};
   //for(size_t i = 0; i < v.size();++i){
   //     for(size_t j = 0; j < v[i].size();++j)
   //     {
   //         if(v[i][j] % 2 != 0){
   //             v[i].erase(v[i].begin() + j);
   //             --j;
   //         }    
   //     }
   //}
   //for(auto & e : v){
   //     for(auto k : e)
   //     cout << k ;
   // cout << endl; 
   //}
    // 6)
   //for (vector<int> v: {vector<int>{},
   //                    {2},
   //                    {1, 2, 2, 2, 3, 1, 2, 4},
   //                    {2, 3, 4, 3, 2, 1},
   //                    {2, 2, 2},
   //                    {5, 4, 3, 2, 1, 2}}) {
   //  cout << to_string(v) << " -> ";
   //  supprimer_valeur(v,2);
   //  cout << to_string(v) << endl;
   //}
    return EXIT_SUCCESS;
}