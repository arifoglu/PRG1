/*
Ecrire la fonction to_string permettant de traiter un vector d'entiers et de retourner sa représentation string au format [v1, v2, .., vn]
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string to_string(const vector<int> & vec){
    string result = "[" ;
    for(size_t i = 0;i < vec.size();++i){
        if(i != vec.size() - 1)
        result += to_string(vec[i]) + ",";
        if(i == vec.size() - 1)
        result += to_string(vec[i]);
    } 
    result += "]";
    return result;
}
int main() {
    const vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << to_string(v); // [1, 2, 3, 4, 5, 6]
   
   return 0;
}