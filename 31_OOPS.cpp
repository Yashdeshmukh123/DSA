#include <iostream>
using namespace std;

class Student{
    // properties
public:
    string name;
    float cgpa;

    //methods
    void getPercentage(){
        cout<<(cgpa*10)<<endl;
    }
};



int main(){
    Student s1;// here s1 is the object ;
    s1.name = "yash";
    s1.cgpa = 5.6;
    cout<<s1.name<<endl;
    s1.getPercentage();
return 0;
}