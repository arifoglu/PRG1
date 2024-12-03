#include <iostream>
#include <cstdlib>
using namespace std;

struct User{
    string first_name;
    string last_name;
    string status;
};

int main() {
    User me;
    me.first_name = "Heraclite";
    me.last_name = "Caton";
    me.status = "Gold";
    cout << me.first_name << " " << me.last_name << " " << me.status << endl;

    return EXIT_SUCCESS;
}