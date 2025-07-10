#include <iostream>
using namespace std;

//for getting ith bit of a number..

int set_ith_bit(int nums , int i)
{
    int bitmask = 1<<i;
    return (nums|bitmask);
}

int clear_ith_bit(int nums , int i)
{
    int bitwise = ~(1<<i);
    return (nums&bitwise);
}

bool power_of_two(int num)
{
    if(!(num&(num-1)))
    {
        return true;
    }   
    else{
        return false;
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


    // it sets the bit to 1 ...
    // cout<< set_ith_bit(6,3)<<endl;

    // it sets the bit to 0 ...
    // cout<<clear_ith_bit(6,1)<<endl;

    // check power of two or not 
    cout<<power_of_two(32)<<endl;
    cout<<power_of_two(4)<<endl;
    cout<<power_of_two(3)<<endl;
    cout<<power_of_two(17)<<endl;

    return 0;
}