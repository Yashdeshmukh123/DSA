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
        *this.carname = name;
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

int main(){
    car c1("BMW" , "black");
    c1.getcolor();
    c1.getname();
return 0;
}