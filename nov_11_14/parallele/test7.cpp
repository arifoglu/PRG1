#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


void imprime(const vector<int> & v){
    for(const auto & e : v)
    cout << " ";
    cout << endl;
}
void tri_insertion(vector<int> & v){
    for(size_t i = 1; i < v.size();++i)
       
        if(v[i] < v[i-1])
        {
            int tmp = v[i];
            size_t j = i - 1;
                while( tmp < v[j])
                {
                    v[j + 1] = v[j];
                    --j;
                }
            v[j+1] = tmp;
        }
}


int main() {
    size_t n;
    cin >> n;
    vector<int> v(n);
    for(auto & e : v)
    e = rand()%100;
    imprime(v);
    tri_insertion(v);
    imprime(v);
 
 return EXIT_SUCCESS;
}


