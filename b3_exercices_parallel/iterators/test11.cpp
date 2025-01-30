#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
using namespace std;


int main() {
    //1) search
    //vector<int> haystack{11, 23, 41, 53, 32, 41, 53, 23, 34, 56};
    //array<int,3> needle1{41,53,23};
    //auto it = search(begin(haystack),end(haystack),begin(needle1),end(needle1));   // index 5
    //cout << distance(begin(haystack),it); 

    //2) copy
    //const array<int,5> a{1,2,3,4,5};
    //vector<int> v(a.size());
    //copy(a.begin(),a.end(),v.begin());
    //for(auto e : v)
    //    cout << e;

    //3) transform
    //string s{"hello"};
    //transform(s.cbegin(),s.cend(),s.begin(),[](unsigned char c){return toupper(c);});
    //cout << s << endl;

    //4) remove
    //string s1 {"Texte avec des espaces"};

    //auto new_end = remove(s1.begin(),s1.end(),' ');
    //cout << s1.size() << " : " << s1 << endl;

    //s1.erase(new_end,s1.end());
    //cout << s1.size() << " : " << s1 << endl;

    //5) min max
    //cout << min(12,23)<<endl;
    //cout << min({12,23,45,32})<<endl;
    //cout << max({12,23,45,32})<<endl;

    return EXIT_SUCCESS;
}