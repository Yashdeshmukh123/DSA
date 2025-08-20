#include <iostream>
using namespace std;

class example{
    public:
        // static const int x ;
        static int x ;
        example(){
            cout<<"starting"<<endl;
        }
        ~example(){
            cout<<"ending"<<endl;
        }
};

// or do this with out using const keyword
int example :: x = 0 ;

class A {
    string secret = "confidential";
    friend class B;
    friend void reveal(A &obj);
};

class B{
    public:
        void show(A &obj){
            cout<<obj.secret<<endl;
        }
};

void reveal(A &obj)
{
    cout<<obj.secret<<endl;
}


int main(){
    // example e1;
    // example e2;

    // static example e3;


    // cout<<e1.x++<<endl;
    // cout<<e2.x++<<endl;
    // cout<<e3.x++<<endl;
    // cout<<"checking"<<endl;

    //friend function....

    A a1;
    B b1;
    b1.show(a1);

    reveal(a1);



return 0;
}