#include <iostream>
using namespace std;

class animal{
protected:
    string animal = "animal;";
public: 
    void eats()
    {
        cout<<"eating...\n";
    }
};

class dog : public animal{

public:
    void barks(){
        cout<<"barking...."<<endl;
        cout<<animal;
    }
    
};


int main(){
    dog d1;
    d1.barks();
    return 0;
}