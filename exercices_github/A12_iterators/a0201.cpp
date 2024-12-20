#include <iostream>
#include <vector>

using namespace std;

template<typename Iterator>
void display(Iterator first, Iterator last) {
   cout << "[";
   for (Iterator it = first; it != last; ++it) {
      if (it != first) cout << ", ";
      cout << *it;
   }
   cout << "]\n";
}

int main() {
   vector v  {1, 2, 3, 4};
   display(v.cbegin(), v.cend());

   vector<int>::const_iterator begin = v.cbegin();
   vector<int>::const_iterator end   = v.cend();

   v.push_back(5);
   
   display(v.cbegin(), v.cend());
   display(begin, end);
}