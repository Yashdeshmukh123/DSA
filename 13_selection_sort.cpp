#include <iostream>
using namespace std;

int selectionsort(int arr[] , int n )
{
    for(int i= 0 ; i<n-1 ; i++)
    {
        int min = i;
        for(int j=i ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
  
}

int print(int arr[],int n)
{
    for(int i=0  ;i<n ; i++)
    {
        cout<<arr[i];
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    print(arr,n);

return 0;
}