#include <iostream>
#include <sstream>
#include <algorithm>
#include <cassert>
#include <cctype>

using namespace std;

bool verifier(string_view a, string_view b){

    string a_copy = string(a);
    string b_copy = string(b);

    transform(a_copy.begin(),a_copy.end(),a_copy.begin(),::toupper);
    transform(b_copy.begin(),b_copy.end(),b_copy.begin(),::toupper);

    sort(a_copy.begin(),a_copy.end());
    sort(b_copy.begin(),b_copy.end());

    a_copy.erase(unique(a_copy.begin(),a_copy.end()),a_copy.end());
    b_copy.erase(unique(b_copy.begin(),b_copy.end()),b_copy.end());
    
    assert(a.size() == b.size());

    return a_copy == b_copy;
}

void tester(string_view a, string_view b) {
   cout << '\"' << a << "\" "
        << (verifier(a, b) ? "" : "in") << "compatible avec "
        << '\"' << b << '\"' << endl;
}

int main() {
   tester("abcdef","FEDBAC");
   tester("abcdef","xyz123");
   tester("abcA","cAba");
}