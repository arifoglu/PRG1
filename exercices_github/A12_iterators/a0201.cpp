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
template<typename T>
void display_details(const vector<T>& v){
   cout << "taille   : " << v.size() <<endl;
   cout << "capacity : " << v.capacity() <<endl;
   cout << "data     : " << v.data() <<endl;
   cout << endl;
}

int main() {
   vector v  {1, 2, 3, 4};
   display(v.cbegin(), v.cend());

   vector<int>::const_iterator begin = v.cbegin();
   vector<int>::const_iterator end   = v.cend();

   cout << endl;
   cout << "AVANT insertion" << endl;
   display_details(v);
   v.push_back(5);

   cout << "APRES insertion" << endl;
   display_details(v);

   cout << "itérations" << endl;
   display(v.cbegin(), v.cend());
   display(begin, end);

   cout << endl;
   cout << "v.begin(): " << &(*v.cbegin()) << endl;
   cout << "begin    : " << &(*begin)      << endl;
}