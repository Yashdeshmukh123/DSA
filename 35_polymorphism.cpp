#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;

public:
    complex(int r, int i)
    {
        real = r;
        img = i;
    }

    void shownum()
    {
        cout << real << "+" << img << "i" << endl;
    }

// operator overloading....
    complex operator+(complex &c2)
    {
        int resreal = this->real + c2.real;
        int resimg = this->img + c2.img;
        complex c3(resreal, resimg);
        cout << "result = ";
        return c3;
    }
};

//function overriding....
//and virtual function...

class parent
{
public:
    void show()
    {
        cout << "parent class" << endl;
    }
    virtual void print(){
        cout<<"printing form parent class.."<<endl;
    }
};

class child : public parent
{
public:
    void show()
    {
        cout << "child class" << endl;
    }
    void print(){
        cout<<"printing from child class";
    }
};



int main()
{
    complex c1(1,2);
    complex c2(3,4);

    c1.shownum();
    c2.shownum();

    // c1.operator+(c2);
    // c1+c2;

    complex c3 = c1 + c2;
    c3.shownum();

    child c;
    c.show();

    // virtual funtion call
    child child1;
    parent *ptr;

    ptr = &child1;//run time binding
    ptr->print();//virtual funtion

    return 0;
}