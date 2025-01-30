#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int main() {
   ////1)Array
   //array<int,5> a{1,2,3,4,5};
   //cout << a.front() << ' ' << a.back() << endl;
   //array<int,5> a{1,2,3,4,5};
   //cout << a[1] << ' ' << a[3] << endl;
   //array<int,5> a{1,2,3,4,5};
   //cout << a[5] << endl; // indetermine
   //array<int,5> a{1,2,3,4,5};
   //cout << a.at(1) << ' ' << a.at(3) << endl; 
   //array<int,5> a{1,2,3,4,5};
   //cout << a.at(5) <<endl;
   ////2)
   //array<int,5> a{1,2,3,4,5};
   //for(size_t i = 1; i <= 3;++i){
   // cout << a.at(i) << ' ';
   //}
   //array<int,5> a{1,2,3,4,5};
   //for(size_t i = a.size() - 1; i >= 0 ;--i){ // i (-) deger alamiyor.size_t unsigned tur
   // cout << a.at(i) << ' ' ;
   //}
   //array<int, 5> a{1, 2, 3, 4, 5};
   //for(size_t i = 3; i < a.size(); --i)
   //cout << a.at(i) << ' '; 
   //array<int,5> a{1,2,3,4,5};
   //for(size_t i = 3; i > 0;--i)
   //cout << a.at(3) << ' ';
   //array<int,5> a{1,2,3,4,5};
   //for(int i : a)
   //cout << i ;
   //array<int,5> a{1,2,3,4,5};
   //for(int i : a)
   //i *= i;
   //for(int i : a)
   //cout << i; 
   //array<int,5> a{1,2,3,4,5};
   //for(int& i : a)
   //i *= i;
   //for(int i : a)
   //cout << i << ' ';
   ////3)
   //array<int,3> a{1,2,3};
   //array<int,3> b{1,3,2};
   //cout << boolalpha << (a < b) ; 
   //array<int,3> a{1,2,3};
   //array<int,4> b{1,2,3,4};
   //cout << boolalpha << (a < b) ; // error compilation
   //array<int, 4> a{1, 2, 3};
   //array<int, 4> b{1, 2, 3, -1};
   //array<int, 4> c{1, 2, 3, 1};
   //cout << boolalpha 
   //     << (a < b) << endl 
   //     << (a < c) << endl 
   //     << (b < c);
   //array<int,10> t{1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for(int i = 1; i < 10 ;++i)
   //t[i] = t[i-1];
   //for(auto e : t) cout << e << '';
   //array<int,10>  t{1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for(int i = 9; i > 0; --i){
   // t[i] = t[i-1];
   //}
   //for(auto e : t)
   //cout << e << ' ' ;
   //array<int, 10> t{1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for (int i = 0; i < 9; ++i) { t[i] = t[i + 1]; }
   //for (auto e: t) cout << e << ' ';
   // no 6
   //array<int, 10> t{1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for (int i = 1; i < 10; i = i + 2) { t[i] = 0; }
   //for (auto e: t) cout << e << ' '; 
   //array<int, 10> t{1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for (int i = 1; i < 5; ++i) { t[i] = t[9 - i]; }
   //for (auto e: t) cout << e << ' ';   
   ///////////////////////////////////////////////////////////
   // Vector
   //vector<int> v(2,3);
   //for(auto e : v) cout << e << ' ';  
   //vector<int> v(4);
   //for(auto e : v) cout << e << ' ';  
   //vector<int> v{1,2,3};
   //for(auto e : v) cout << e << ' '; 
   //vector<int> v{1.,2,3}//////////error
   //for(auto e : v) cout << e << ' ';  
   //vector<double> v{1.,2,3};
   //for(auto e : v) cout << e << ' ';  
    //vector<int> v(3) = {1, 2, 3};//// error
    //for (auto e: v) cout << e << ' ';
    //vector v{1.5, 2.4, 3.4};
    //for (auto e: v) cout << e << ' ';
    //vector v{1.,2,3}//// error
    //vector v(3,2.f);
    //for (auto e: v) cout << e << ' ';
    //vector v(4); /////// error
    //for (auto e: v) cout << e << ' ';

    return EXIT_SUCCESS;
}