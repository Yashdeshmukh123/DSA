#include <iostream>
using namespace std;


void countingsort(int arr[] , int n)
{
    int freq[n] ;
    for(int i=0 ; i<n ; i++)
    {
        freq[i]=0;
    }
    for(int i = 0 ; i<n ; i++)
    {
       int a = arr[i];
       freq[a] = freq[a]+1;
    }
    for(int i=0 ; i<n ; i++)
    {
        int a=freq[i];
        for(int j=0 ; j<a ; j++)
        {
            arr[i]=i;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
}


int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n  = sizeof(arr)/sizeof(int);
    countingsort(arr,n);
return 0;
}