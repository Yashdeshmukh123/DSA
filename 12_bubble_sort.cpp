#include <iostream>
using namespace std;

void bubblesort(int arr[] , int n)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        bool isSwap = false;
        for(int j = 0 ; j<n-i-1 ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;

                swap(arr[j],arr[j+1]);
                isSwap = true ;
            }
        }
        if(!isSwap)
        {
            cout<<"array is already sorted"<<endl;
            return;
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
}


int main(){{}
    int arr[] = {1,2,3,4,6,5,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
return 0;
}

// Mistakes - we can use swap function for swaping the numbers
//          - for avoiding multiple iterations we can use bool for a array which hi already sorted

