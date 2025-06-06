#include <iostream>
using namespace std;

int binary(int arr[],int key , int n)
{
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        int mid = (start+end)/2;  
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        else if(arr[mid]>key)
        {
            end = mid-1;
        }
    }
    return -1;
    
}

int main(){

    int key;
    cin>>key;
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);

    cout<<binary(arr,key,n);

return 0;
}