#include <iostream>
using namespace std;

class Student{
    // properties 
    string name;
    float cgpa;

public:
   
    //methods
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }

    void setname(string nameval)
    {
        name = nameval;
    }
    void setcgpa(float cgpaval)
    {
        cgpa = cgpaval;
    }
    string getname()
    {
        return name;
    }
    float getcgpa()
    {
        return cgpa;
    }
};



int main(){
    Student s1;// here s1 is the object ;
    // s1.name = "yash";
    // s1.cgpa = 5.6;
    // cout<<s1.name<<endl; 
    s1.setname("yash");
    s1.setcgpa(9.1);
    // s1.getPercentage();

    cout<<s1.getname()<<endl;
    cout<<s1.getcgpa()<<endl;
return 0;
}