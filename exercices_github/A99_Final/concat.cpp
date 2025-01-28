#include <iostream>
#include <algorithm>

using namespace std;

template<typename Inputit, typename Outputit>
Outputit concat(Inputit first,Inputit last, Outputit result){
    for(Inputit it = first; it != last;++it ){
        result = copy(it->first,it->second,result);
    }
    return result;
}
