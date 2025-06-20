#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "aeioujjdheioua";
    int count = 0;
    for(int i=0 ; i<str.length();i++)
    {
        
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    cout<<count;
    // cout<<(int)'a'<<endl;
    // cout<<(int)'z'<<endl;
return 0;
}