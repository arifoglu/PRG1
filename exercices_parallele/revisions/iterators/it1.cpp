#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int g(int a, int b){return a * b;};
int h(int n) {return n % 3 - 1;};
bool is_odd(int n) {
    return n % 2 != 0; 
}

int main() {
    //const size_t N = 4;
    //int t[] = {2, 3, 5, 9};
    //for (size_t i = N; i > 0; --i)
    //    t[i-1] = ++t[N - i];
    //for(size_t i = 0;i < N;i++)
    //    cout << t[i] << " " ;
    //cout << endl;

    //const size_t N = 5;
    //int t[] = {2,3,5,9,11};
    //for(size_t i = N; i > 1; i -= 2)
    //    t[i - 1] += t[i - 2];
    //for(size_t i = 0;i < N;i++)
    //    cout << t[i] << " " ;
    //cout << endl;

    //const size_t N = 5;
    //array<int,N> a;
    //auto it1 = a.end() - 4;
    //auto it2 = a.begin() +  3;
    //a.fill(18);
    //fill(it1,it2,a.empty());
    //for(int e : a) cout << e << " ";
    //cout << endl;
    
    //vector<int> v = {-2,-3,-5,9,5,3};
    //auto it1 = --min_element(v.begin(),v.end());
    //auto it2 = ++max_element(v.begin(),v.end());
    //v.erase(it1,it2);
    //for(int i : v) cout << i << " " ;
    //cout << endl;

    //vector<int> v = {2,3,5};
    //v.resize(4,9);
    //v.insert(v.end() - 1, v.rbegin()+1,v.rend() - 1);
    //for(int i : v) cout << i << " " ;
    //cout << endl;

    //const size_t N = 4;
    //vector<size_t> v = {2};
    //for(size_t i = 0; i < N;++i)
    //    v.push_back(v.front() * v.back() + v.size());
    //v.pop_back();
    //for(size_t i : v ) cout << i << " ";
    //cout << endl;

    //vector<int> v = {2,3,5};
    //for(int val : v)
    //    val *= val;
    //for(int i : v ) cout <<  i << " " ;
    //cout << endl;

    //vector<int> v{2,3,5,9};
    //vector<int> w(5);
    //copy(v.begin(),v.end(),w.rbegin());
    //for(int e : w ) cout <<  e << " " ;
    //cout << endl;

    //vector<int> v{2,3,3,5,5,3,3,2};
    //v.erase(unique(v.begin(),v.end()),v.end());
    //for(int e : v ) cout <<  e << " " ;
    //cout << endl;

    //vector<int> v{2,1,3,5,4,2};
    //auto it1 = min_element(v.begin(),v.end());
    //auto it2 = max_element(v.begin(),v.end());
    //*it2 = 6;
    //fill(it1,it2,0);
    //for(int e : v ) cout <<  e << " " ;

    //vector<int> v{2,3,5,9,11};
    //vector<int> w{5,2,1,4,3};
    //for(auto i = w.rbegin(); i != w.rend();++i)
    //    if(2**i < v.at((size_t)*i -1))
    //        v.at((size_t)*i - 1) *= *i;
    //for(int e : v ) cout <<  e << " " ;
    //cout << endl;

    //vector<int> v{2,3,5,9,11};
    //cout << accumulate(v.begin(),v.end(),0,g);

    //vector<int> v{2,3,5,9,11};
    //v.reserve(8);
    //vector<int> w (v.capacity());
    //transform(v.crbegin(),v.crend(),w.begin(),h);
    //for(int e : w) cout << e << " " ;
    //cout << endl;

    //vector<int> w1{1,2,3,4,5,6};
    //vector<int> w2{2,3,5,9};
    //w1.insert(w1.end(),w2.back());
    //vector<int> v(w1.size());
    //v.erase(remove_copy_if(w1.begin(),w1.end(),v.begin(),h),v.end());
    //for(int e : v) cout << e << " " ;
    //cout << endl;

    //vector<int> w1{1,2,3,4,5,6};
    //vector<int> v(w1.size());
    //auto it = remove_copy_if(w1.begin(),w1.end(),v.begin(),is_odd);
    //v.erase(it,v.end());
    //for(int e : v) cout << e << " " ;

    //string str("abcdefg",5);
    //string s(string(str,3)+str);
    //cout << s << endl;

    //string str = "abcdefghij";
    //string s = str.substr(str.find_first_not_of("aceg"),4);
    //cout << s << endl;

}
