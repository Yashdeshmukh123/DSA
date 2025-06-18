#include <iostream>
#include <string.h>
using namespace std;


void toUpper(char word[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        char ch = word[i];
        if(ch>='A' && ch<='Z')
        {
            continue;
        }
        else
        {
            //  int pos = ch - 'a';
             word[i] = (ch - 'a') + 'A';
        }
    }
    cout<<word<<endl;
}


void toLower(char word[],int n)
{
    for(int i=0 ; i<n ; i++)
    {
        char ch = word[i];
        if(ch>='a' && ch<='z')
        {
            continue;
        }
        else
        {
            //  int pos = ch - 'a';
             word[i] = (ch - 'A') + 'a';
        }
    }
    cout<<word<<endl;


}


int main(){
    // char ch = '@';
    // cout<<(int) ch <<endl;
    // int a = 34 ;
    // cout<<(char) a <<endl;

    // char ch[10] = {'c','o','d','e','\0'};
    // cout<<ch<<endl;
    // char cha[10] = "code";
    // cout<< cha <<endl;
    
    char word[] = "ApPle"; 
    // toUpper(word,strlen(word));
    toLower(word,strlen(word));

return 0;
}