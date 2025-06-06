#include <iostream>
using namespace std;


int bintodec(int bin)
{
    int n = bin ;
    // cout<<"enter the binary number :"<<endl;
    // cin>>bin;
    int r;
    int decimal=0;
    int power=1;
    for(int i=n ; i!=0 ; i=i/10)
    {
        r=i%10;
        decimal = decimal+ (r*power);
        power = power*2;
    }
    cout<<decimal<<endl;

}

int dectobin(int dec)
{
    int d = dec;
    int bin = 0;
    int power=1;
    int r;
    for(int i=d ; i!=0 ; i=i/2 )
    {
        r = i%2;
        
        bin = bin + r;
        bin = bin*(power*10);
    }
    cout<<bin<<endl;
}

int main()
{
    // bintodec(1001);
    dectobin(8);
    return 0;
}