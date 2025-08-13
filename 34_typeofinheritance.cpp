#include <iostream>
using namespace std;

class animal
{
public:
    void eats()
    {
        cout << "eating..\n";
    }
};

//single level inheritance

class mammal : public animal
{
public:
    string bloodtype;
    mammal()
    {
        bloodtype = "warm";
    }
};

// multi level inheritance
class dog : public mammal
{
public:
    void barks(){
        cout<<"barking..\n";
    }
};

//multiple inheritance

class teacher{
    public:
        string subject;
        int salary;
};

class student{
    public:
        int rollno;
        float cgpa;
};

class TA : public teacher , public student
{
    public:
    string name;

};


int main()
{
    // dog d1;
    // d1.barks();
    // cout<<d1.bloodtype<<endl;
    // d1.eats();

    TA ta1;
    ta1.name = "yash";
    ta1.rollno = 45;
    ta1.cgpa = 8.9;

    cout<<ta1.name<<endl;
    cout<<ta1.rollno<<endl;
    cout<<ta1.cgpa<<endl;


    return 0;
}