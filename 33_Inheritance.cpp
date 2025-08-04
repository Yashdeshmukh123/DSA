#include <iostream>
using namespace std;

class animal{
    string animal = "tiger";
protected:
    string animal1 = "dog";
public: 
    string animal2 = "cat";
    void eats()
    {
        cout<<animal<<endl;
        cout<<"eating....\n";
    }
};

class dog : public animal{

public:
    void barks(){
        cout<<animal1<<endl;
        cout<<"barking....\n"<<endl;
        
    }
    void meow(){
        cout<<animal1<<endl;
        cout<<"meowwww..."<<endl;
    }
    
};


int main(){
    dog d1;
    d1.eats(); //private call
    d1.barks(); //protected call
    d1.meow();
    cout<<d1.animal2<<endl; //public call


    return 0;
}