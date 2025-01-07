#include <iostream>
#include <stdexcept>
using namespace std;

void testF(int type){
    if(type == 1)
        throw out_of_range("index out of range");
    else if(type == 2)
        throw length_error("string length error!");
    else if(type == 3)
        throw bad_alloc();
}

int main() {
    try{
        testF(1);
    }
    catch(const out_of_range&e){
        cout << "out of range : " << e.what() <<endl;
    }
    catch(const length_error&e){
        cout << "length error caught : " << e.what() <<endl;
    }
    catch(const bad_alloc&e){
        cout << "bad alloc " << e.what() <<endl;
    }
}
