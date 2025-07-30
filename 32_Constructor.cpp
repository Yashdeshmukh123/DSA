#include <iostream>
#include <string.h>
using namespace std;

class car{
    string carname;
    string carcolor;

public:
    car(string name , string color){
        carname = name;
        carcolor = color;
        cout<<"constructor is been called...\n";
        //this pointer
        this->carcolor = color;
        this->carname = name;
    }
    void start(){
        cout<<"car is started\n";
    }
    void stop(){
        cout<<"car is stoppped\n";
    }
    //getters
    void getname(){
        cout<<carname<<endl;
    }
    void getcolor(){
        cout<<carcolor<<endl;
    }

};

class user{
    int id;
    string password;

public:
    string username;

    user(int id ){
        cout<<"constructor is been called\n";
        this->id = id;
    }
    //setter
    void setvalue(string password){
        this->password = password;
    }
    void getvalue(){
        cout<<password<<endl;
    }

};

int main(){
    // car c1("BMW" , "black");
    // c1.getcolor();
    // c1.getname();

    user u1(100);
    u1.setvalue("1234yash");
    u1.getvalue();
    return 0;
}