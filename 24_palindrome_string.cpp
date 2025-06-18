#include <iostream>
#include <string.h>
using namespace std;

//leetcode question no. 125 -- valid palindrome 


bool palindrome(char ch[] , int n)
{
    int start = 0, end = n-1;
    while(start<=end)
    {
        if(ch[start++]!=ch[end--])
        {
            cout<<"Is not a palindrome"<<endl;
            return false;
        }
        // else{
        //     start++;
        //     end--;
        // }

    }
    cout<<"is a palindrome"<<endl;
    return true;
}

int main(){
    char ch[] = "racecar";
    // palindrome(ch,strlen(ch));
    char str1[100];
    // str1 = "apna college"   we cannot inisialize a array like this so we use strcpy method

    strcpy(str1,"apna college");
    // cout<<str1<<endl;

    char str2[100];

    strcpy(str2,str1);
    // cout<<str2<<endl;

    char str3[100] = " is a platform ";

    // strcat(str2,str3);
    // cout<<str2<<endl;

    cout<<strcmp(str1,str2)<<endl;
    cout<<strcmp(str2,str3)<<endl;
    




return 0;
}