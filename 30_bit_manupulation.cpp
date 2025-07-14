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

int updateithbit(int nums , int i , int val)
{
    int bitmask = ~(1<<i);
    nums = nums & bitmask;

    nums = nums | (val<<i);

    cout<<nums;

}

int last_i_bits(int nums , int i)
{
    int bitmask = ~0<<i;
    nums = nums&bitmask;
    cout<<nums;

}

int countsetbits(int nums)
{
     int count = 0;
    while(nums>0){
    int lastbit = nums & 1;
    count += lastbit;
    nums = nums>>1;
    }
    cout<<count;
}

int fastexpo(int x, int n)
{
    int ans = 1;
    
    while(n>0)
    {
        int lastbit = n&1;
        if(lastbit==1)
        {
            ans = ans*x;
        }
        x = x*x;
        n = n>>1;
    }
    cout<<ans;

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
    // cout<<power_of_two(32)<<endl;
    // cout<<power_of_two(4)<<endl;
    // cout<<power_of_two(3)<<endl;
    // cout<<power_of_two(17)<<endl;

    // in this both the case of set and clear occurs on the basis of the values given..
    // updateithbit(7,3,1);

    // it removes last i bits , or it makes it zero..
    // last_i_bits(15,2);

    // countsetbits(10);


    fastexpo(3,5);
    return 0;
}