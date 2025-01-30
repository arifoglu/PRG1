#include <iostream>
#include <cstdlib>
using namespace std;

void onExit(){
    cout << "program is turning off!!!"<<endl;
}

int main() {
    atexit(onExit);     // program kapanmadan once bu cagrilir!!!

    cout << "program runs..."<<endl;

    exit(EXIT_SUCCESS);// program kapanir,fakat onExit cagrilir!!!

}
