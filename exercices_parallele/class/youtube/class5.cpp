#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class User{
    static int user_count;
    string status = "Gold";
    
    public:
        static int get_user_count(){
            return user_count;
        }

        string first_name;
        string last_name;

        string get_status(){
            return status;
        }
    void set_status(string status){
        if(status == "Gold" || status == "Silver" || status == "Bronze" ){
            this->status = status;
        }else{
            this->status = "No status";
        }
    }    
    User(){
        user_count++;
    }
    User(string first_name, string last_name, string status){
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
    ~User(){
        user_count--;
    }
        
};
int User::user_count = 0;

int main() {
    User user, user2;
    cout << User::get_user_count() <<endl;
    user.~User();
    cout << User::get_user_count() <<endl;


    return EXIT_SUCCESS;
}