#include <algorithm>
#include <iterator>
using namespace std;

template<typename Inputit>
size_t total_size(Inputit first, Inputit last){
   size_t size = 0;
   for_each(first,last,[&size](auto p) {size += (size_t)distance(p.first,p.second);}) ;
   return size;
}