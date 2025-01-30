#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

int main() {
    //vector<int> v = {1,2,3,4,5};
    //v.erase(v.begin());// first element delete;
    //for(auto e : v)
    //cout << e ;

    //vector<int> v = {1,2,3,4,5};
    //v.erase(v.begin() + 3);// index 3  delete;
    //for(auto e : v)
    //cout << e ;
   
    //vector<int> v = {1,2,3,4,5};
    //auto it = find(v.begin(),v.end(),3);
    //if(it != v.end()){
    //    v.erase(it);       // numero 3  delete;
    // } ; 
    //
    //for(auto e : v)
    //cout << e ;

    // numero 3 va effacer
    //vector<vector<int>> v = {{10,20,3},{1,2,3,4,5}};
    //
    //auto & inner_vector = v[0];
    //auto it = find(inner_vector.begin(),inner_vector.end(),3);
    //
    //if(it != inner_vector.end()){
    //    inner_vector.erase(it);       // numero 3  delete;
    // } ; 
    //
    //
    //for(const auto & e : v){
    //    for(auto k : e){
    //         cout << k ;
    //    }
    //cout << endl;   
    //} 

    // tum alt vectorlerden 3 aranir ve silinir
    //vector<vector<int>> v = {{10,20,3},{1,2,3,4,5}};
    //for(auto & inner_vector : v){
    //    auto it = find(inner_vector.begin(),inner_vector.end(),3);
    //    
    //    if(it != inner_vector.end()){
    //    inner_vector.erase(it);
    //}
    //}
    //for(const auto&  inner_vector : v){
    //    for(auto & k : inner_vector)
    //        cout << k;
    //cout << endl;    
    //}

    // les valeurs impaires vont effacer
    //vector<vector<int>> v = {{10,20,3},{1,2,3,4,5}};
    //for(auto & inner_vector : v){
    //       for(auto it = inner_vector.begin();it != inner_vector.end();){
    //        if(*it % 2 != 0){
    //            it = inner_vector.erase(it);
    //        }else{
    //            ++it;
    //        }
    //       } 
    //}
    //for(const auto&  inner_vector : v){
    //    for(auto & k : inner_vector)
    //        cout << k;
    //cout << endl;    
    //}

    for (vector<int> v : { vector<int> {}, {2}, {1, 2, 2, 2, 3, 1, 2, 4} } )
    {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }

//for (vector<int> v: {vector<int>{},
//                        {1},
//                        {1, 2},
//                        {1, 2, 3},
//                        {1, 2, 3, 4},
//                        {1, 2, 3, 4, 5},
//                        {1, 2, 3, 4, 5, 6}}) 
//    {
//      supprimer_centre(v);
//   }

   return 0;
}










/*

    vector<vector<int>> test_vectors = {
                                        {},
                                        {2},
                                        {1, 2, 2, 2, 3, 1, 2, 4},
                                        {2, 3, 4, 3, 2, 1},
                                        {2, 2, 2},
                                        {5, 4, 3, 2, 1, 2}
                                        };
*/