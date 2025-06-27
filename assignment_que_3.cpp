#include <iostream>
#include <string>
using namespace std;

// practice question no. 1 - count how manny times lower case vowel come in the string....

void lowercasevowel(string str)
{
    int count = 0;
    for(int i=0 ; i<str.length();i++)
    {
        
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    cout<<count;
}




int main(){
    string str = "aeioujjdheioua";
    lowercasevowel(str);
    
return 0;
}
// leetcode question no. 20
// leetcode question no. 1657

