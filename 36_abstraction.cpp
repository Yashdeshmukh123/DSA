#include <iostream>
using namespace std;


//abstract class
class shape{
    public:
        virtual void draw() = 0 ;//abstract fnx or pure virtual fnx
};

class circle : public shape{
    public:
        void draw(){
            cout<<"drawing a circle.."<<endl;
        }
};

class square : public shape{
    public:
        void draw(){
            cout<<"drawing a square.."<<endl;
        }
};


int main(){

    circle c1;
    c1.draw();

    square s1;
    s1.draw();

return 0;
}