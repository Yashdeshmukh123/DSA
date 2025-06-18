#include <iostream>
#include <string.h> 
using namespace std;

void reversearray(char ch1[],int n )
{
    int start = 0 , end = n-1 ;
    while(start<end)
    {
        swap(ch1[start],ch1[end]);
        start++;
        end--;
    }
    
}

int main(){
    char ch1[] = "code";
    reversearray(ch1,strlen(ch1));
    cout<<ch1;

return 0;
}