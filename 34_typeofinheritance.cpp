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

class mammal : public animal
{
public:
    string bloodtype;
    mammal()
    {
        bloodtype = "warm";
    }
};

class dog : public mammal
{
public:
    void barks(){
        cout<<"barking..\n";
    }
};

int main()
{
    dog d1;
    d1.barks();
    cout<<d1.bloodtype<<endl;
    d1.eats();

    return 0;
}