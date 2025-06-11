// #include <iostream>
// using namespace std;

// void bubblesort(int arr[] , int n)
// {
//     bool isSwap = false;
//     for(int i = 0 ; i<n-1 ; i++)
//     {
        
//         for(int j = 0 ; j<n-i-1 ; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 // int temp = arr[j];
//                 // arr[j] = arr[j+1];
//                 // arr[j+1] = temp;

//                 swap(arr[j],arr[j+1]);
//                 isSwap = true ;
//             }
//         }
//         if(!isSwap)
//         {
//             cout<<"array is already sorted"<<endl;
//             return;
//         }
//     }
//     for(int i=0 ; i<n ; i++)
//     {
//         cout<<arr[i];
//     }
// }


// int main(){{}
//     int arr[] = {1,2,3,4,6,5,7,8,9,10};
//     int n = sizeof(arr)/sizeof(int);
//     bubblesort(arr,n);
// return 0;
// }

// #include <iostream>
// using namespace std;

// int selectionsort(int arr[] , int n )
// {
//     for(int i= 0 ; i<n-1 ; i++)
//     {
//         int min = i;
//         for(int j=i ; j<n ; j++)
//         {
//             if(arr[j]>arr[min])
//             {
//                 min = j;
//             }
//         }
//         swap(arr[min],arr[i]);
//     }
  
// }

// int print(int arr[],int n)
// {
//     for(int i=0  ;i<n ; i++)
//     {
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,6,8,7,5,9};
//     int n = sizeof(arr)/sizeof(int);
//     selectionsort(arr,n);
//     print(arr,n);

// return 0;
// }

#include <iostream>
using namespace std;

void insertionsort(int arr[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
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
    int  arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    insertionsort(arr,n);
    print(arr,n);
return 0;
}