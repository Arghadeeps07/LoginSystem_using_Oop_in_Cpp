#include<iostream>
using namespace std;
class User{
    string name;
    int age;
    string username;
    string password;
    bool Islogin = false;
public:
    User(string name,int age,string username,string password)
    {
        this->name = name;
        this->age = age;
        this->username = username;
        this->password = password;
    }
    void login(string username,string password) // This Function will help the user to login
    {
        if (this->username == username && this->password == password){
            cout << "Login successfully"<< endl;
            Islogin = true;
        }
        else
            cout << "Login unsuccessfully"<< endl;

    }
    void logout()  // This Function will help the user to logout
    {
        cout << "logout successfully"<< endl;
        Islogin = false;
    }
    void showDetails() // This Function will show the details of the user 
    {
        if (Islogin==true){
        cout << "show name" << name << endl;
        cout << "show age" << age << endl;
        cout << "show username" << username << endl;
        }
        else
            cout << "user is logged out" << endl;
    }

};
int main(){
    User u1("Arghadeep",20,"argha@302","argha_007");
    u1.login("argha@302","argha_007");
    u1.logout();
    u1.showDetails();
    return 0;
}
