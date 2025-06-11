#include <iostream>
#include <algorithm> 
using namespace std;


void countingsort(int arr[] , int n)
{
    int freq[10000] ;
    int minval = INT32_MAX;
    int maxval = INT32_MIN;
    for(int i=0 ; i<n ; i++)
    {
        minval = min(minval,arr[i]);
        maxval = max(maxval,arr[i]);
    }
    for(int i = 0 ; i<n ; i++)
    {
       int a = arr[i];
       freq[a] = freq[a]+1;
    }
    for(int i=minval,j=0 ; i<maxval ; i++)
    {
        int a=freq[i];
        while(freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<",";
    }
    
}


int main(){
    // int arr[8] = {1,4,1,3,2,4,3,7};
    int arr[10] = {3,6,2,1,8,7,4,5,3,1};
    int n  = sizeof(arr)/sizeof(int);
    // sort(arr,arr+n);
    // // countingsort(arr,n);
    //  for(int i=0 ; i<n ; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
return 0;
}