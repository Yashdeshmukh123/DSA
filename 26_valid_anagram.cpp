#include <iostream>
#include <string>
using namespace std;

bool anagram(string str1 , string str2 )
{
    int n=26;

    if(str1.length() != str2.length())
    {
        cout<<"not a anagram"<<endl;
        return false;
    }
        int arr1[n] = {0};
        for(int i=0 ; i<str1.length() ; i++)
        {
            int pos = str1[i] - 'a';
            arr1[pos]++;
        }

        for(int i=0 ; i<str2.length() ; i++)
        {
            int pos = str2[i] - 'a';
            if(arr1[pos]==0)
            {
                cout<<"not a anagram"<<endl;
                return false;
            }
            arr1[pos]--;
           
        }
         cout<<"this is a anagram";
    
}


int main(){
    string str1 , str2;
    getline(cin,str1);
    getline(cin,str2);

    anagram(str1,str2);

    
return 0;
}