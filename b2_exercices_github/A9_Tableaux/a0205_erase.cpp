
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void supprimer_centre(vector<int> & vec){
    if(vec.empty()){return;}

    //supprimer la valeur du milieu
    int index_milieu = vec.size() / 2;
    
    if(vec.size() % 2 == 0){
        vec.erase(vec.begin() + index_milieu - 1,vec.begin() + index_milieu + 1);
    }else{
        vec.erase(vec.begin() + index_milieu);
    }
    for(size_t e : vec){
        cout << e << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {1,2,3,4,5,6};

    supprimer_centre(vec1);    
    supprimer_centre(vec2);    
    
    return  0;
}