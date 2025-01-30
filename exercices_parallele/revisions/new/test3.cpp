#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    //le but = 40 va supprimer
    //vector<int> v = {10,20,30,40};
    //auto val_remove = find(v.begin(),v.end(),40);
    //v.erase(val_remove);
    //for(auto e : v){
    //    cout << e ;
    //}

    //entre 30 et 50 va supprimer
    vector<int> v = {10,20,30,40,50,60};
    auto position1 = find(v.begin(),v.end(),30); 
    auto position2 = find(v.begin(),v.end(),50);
    v.erase(position1 + 1 ,position2 );
    for(auto e : v ){
        cout << e ;
    } 
    cout << endl;
    
    return  0;
}