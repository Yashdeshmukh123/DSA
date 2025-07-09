#include <iostream>
using namespace std;

int main(){
    //bitwise operator
    cout<<(3&5)<<endl;
    cout<<(3|5)<<endl;
    cout<<(3^5)<<endl;
    
    //bitwise right and left shift

    cout<<(4>>2)<<endl;
    cout<<(5<<2)<<endl;

    //for even and odd with the help of bitwise operator and with using bitmask..

    cout<<(8&1)<<endl;
    cout<<(5&1)<<endl;

    return 0;
}