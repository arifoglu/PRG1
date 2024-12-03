#include <iostream>
#include <cstdlib>
using namespace std;

struct User{
    string first_name;
    string last_name;
    string get_status(){
        return status;
    }
    private:
        string status = "Gold";
};

int main() {
    User me;
    me.first_name = "Heraclite";
    me.last_name = "Caton";
    cout << me.first_name << " " << me.last_name << " " << me.get_status() << endl;

    return EXIT_SUCCESS;
}