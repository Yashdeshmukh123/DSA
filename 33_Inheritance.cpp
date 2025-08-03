#include <iostream>
using namespace std;

class animal{
    string animal = "tiger";
protected:
    string animal1 = "lion";
public: 
    string animal2 = "dog";
    void eats()
    {
        cout<<animal<<endl;
        cout<<"eating...\n";
    }
};

class dog : public animal{

public:
    void barks(){
        cout<<animal1;
        cout<<"barking...."<<endl;
        
    }
    
};


int main(){
    dog d1;
    d1.eats();
    d1.barks();
    cout<<d1.animal2<<endl;


    return 0;
}