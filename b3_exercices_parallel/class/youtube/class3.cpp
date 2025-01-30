#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class User{
    string status = "Gold";
    public:
        string first_name;
        string last_name;

        string get_status(){
            return status;
        }

    User(string first_name, string last_name, string status){
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
    }
    ~User(){
        cout << "Destructor\n";
    }
        
};
int main() {
    User user("her","aclite","silver");
    cout << user.first_name << user.last_name << user.get_status() << endl;

    return EXIT_SUCCESS;
}