#include <iostream>
using namespace std;

//question no. 1
// class complex
// {
//     int real;
//     int imag;
// public:
   
//     complex(int r, int i)
//     {
//         real = r;
//         imag = i;

//     }
//     void showsub(){
//         cout<<real<<"+"<<imag<<"i"<<endl;
//     }

//     complex operator-(complex &c2)
//     {
//         int resreal = this->real - c2.real;
//         int resimg = this->imag - c2.imag;
//         // cout<<resreal<<"-"<<resimg<<endl;
//         complex c3(resreal,resimg);
//         return c3;
//     }
// };

// int main()
// {
//     complex c1(4, 3);
//     complex c2(1, 2);

//     // c1.real = 3;
//     // c2.real = 1;

//     // c1 - c2;
//     complex c3 = c1-c2;
//     c3.showsub();
//     return 0;
// }

class bankaccount{
    int accnumber = 123;
    int balance = 0;
    public:
        void deposit(int d){
            cout<<"deposited = "<<d<<endl;
            balance+=d;
        }
        void withdraw(int w){
             cout<<"withdraw = "<<w<<endl;
            balance-=w;
        }
        void getbalance(){
            cout<<"balance = "<<balance<<endl;
        }
};


class person{
    public:
    string name;
    int age;

};

class student : public person{

    public:
    string studentid;
    student(string n,int a ,string s){
        name = n;
        age = a;
        studentid = s;
    }
    void displaystudentinfo(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"student id = "<<studentid<<endl;
    }
};
int main(){

    // bankaccount b1;
    // b1.deposit(10000);
    // b1.getbalance();
    // b1.withdraw(300);
    // b1.getbalance();

    student student("alice",20,"s12345");
    student.displaystudentinfo();
}