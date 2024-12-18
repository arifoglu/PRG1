#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
using namespace std;

int main () {
    //1)
    //array<int,4> a{1,2,3,4};
    //vector v1(a.begin(),a.end()-1);              // v1 = 1,2,3

    //2) next
    //list<double> l{5,6,7};
    //vector v2(next(l.begin()),l.end());          // v2 = 6,7

    //3) assign
    //array<int,4> a{1,2,3,4};
    //vector<int> v;
    //v.assign(a.begin(),a.end() - 2);             // v = 1,2   

    //4) erase
    //vector<int> v{2,3,5,7,11,13,17};
    //auto it = v.erase(v.begin() + 3);            // v = 2,3,5,11,13,17
    //it = v.erase(v.begin() + 2, v.end() - 1);    // v = 2,3,17 

    //5) insert
    //vector<int> v{2,3} ;
    //array<int,2> a{8,9};
    //v.insert(v.begin() + 1,1);                     // v = 2,1,3
    //v.insert(v.begin() + 2,2,4);                   // v = 2,1,4,4,3 
    //v.insert(v.begin(),{5,6,7});                   // v = 5,6,7,2,1,4,4,3
    //auto it = v.insert(v.end(),a.begin(),a.end()); // v = 5,6,7,2,1,4,4,3,8,9

    return EXIT_SUCCESS;
}