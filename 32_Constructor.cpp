#include <iostream>
#include <string.h>
using namespace std;

class car{
    // string carname;
    // string carcolor;

public:
    string carname;
    string carcolor;
    car(string name , string color){
        // carname = name;
        // carcolor = color;
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
    car(car &original)
    {
        cout<<"custom copy constructor called\n";
        carname = original.carname;
        carcolor = original.carcolor;
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

class car1{

    public:
        string name;
        string color;
        int* mileage ;

    car1(string name , string color)
    {
        cout<<"constructor called..\n";
        this->name = name;
        this->color = color;
        mileage = new int;
        *mileage = 20;

    }

    car1(car1 &original)
    {
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }

    ~car1(){

        cout<<"deleting object..";
        if(mileage!= NULL)
        {
            delete mileage;
            mileage= NULL;
        }
    }

    
};

int main(){

    // this keyword in constuctors..
    // car c1("BMW" , "black");
    // c1.getcolor();
    // c1.getname();

    // user u1(100);
    // u1.setvalue("1234yash");
    // u1.getvalue();
    

    //copy constructor...
    // car c1("BMW","blue");
    // car c2(c1);
    // cout<<c1.carname<<endl;
    // cout<<c2.carcolor<<endl;

    // shallow copy - it works on the reference of the constructor of the object..
    // car1 c1("maruti","white");
    // car1 c2(c1);

    // cout<<c2.name<<endl;
    // cout<<c2.color<<endl;
    // cout<<*c2.mileage<<endl;

    // *c2.mileage = 30;
    // cout<<*c2.mileage<<endl;
    // cout<<*c1.mileage<<endl;

    //desturctor...

    car1 c1("BMW" , "red");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    



    return 0;
}