#include <iostream>
#include <string.h>
using namespace std;

//leetcode question no. 125 -- valid palindrome 


bool palindrome(char ch[] , int n)
{
    int start = 0, end = n-1;
    while(start<=end)
    {
        if(ch[start]!=ch[end])
        {
            cout<<"Is not a palindrome"<<endl;
            return false;
        }
        else{
            start++;
            end--;
        }

    }
    cout<<"is a palindrome"<<endl;
    return true;
}

int main(){
    char ch[] = "racecar";
    palindrome(ch,strlen(ch));
return 0;
}