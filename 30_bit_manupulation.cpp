#include <iostream>
using namespace std;

//for getting ith bit of a number..

void ith_bit(int nums , int i)
{
    int index = 1<<i;
    nums = nums&i;
    if(nums==0)
    {
        cout<<"0";
    }
    else{
        cout<<"1";
    }
}

int main(){
    //bitwise operator
    // cout<<(3&5)<<endl;
    // cout<<(3|5)<<endl;
    // cout<<(3^5)<<endl;
    
    // //bitwise right and left shift

    // cout<<(4>>2)<<endl;
    // cout<<(5<<2)<<endl;

    // //for even and odd with the help of bitwise operator and with using bitmask..
    // // it prints 0 for even numbers and 1 for odd numbers..

    // cout<<(8&1)<<endl;//here we use 1 as a bitmask so that by doing & operation we can get last bit as 0 or 1..
    // cout<<(5&1)<<endl;

    ith_bit(8,2);
    
    



    return 0;
}