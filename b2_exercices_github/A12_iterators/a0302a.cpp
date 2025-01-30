#include <iostream>
#include <vector>

using namespace std;

class EstIntervalle{
    int first, last;
    public:
        EstIntervalle(int f, int l) : first(f), last(l) {}
        bool operator()(int x)const{
            return (x > first) && (x < last);
        }
};


int main() {
   vector   v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   vector intervalle{3, 6};
   cout << count_if(v.begin(),v.end(),EstIntervalle(intervalle[0],intervalle[1]))<<endl;
   
   return 0;
}