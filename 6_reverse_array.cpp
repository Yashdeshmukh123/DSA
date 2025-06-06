#include <iostream>
using namespace std;

//reversing an array using extra space...

// int reverse(int arr[],int n){
//     int arr2[n];
//     for(int i= 0; i<n ; i++)
//     {
//         int j = n-i-1;
//         arr2[i] = arr[j];
//     }

//     for(int i =0 ; i<n ; i++)
//     {
//         arr[i] = arr2[i];
//     }
    
// }

// int main(){
//     int arr[] = {5,4,3,9,2};
//     int n = sizeof(arr) / sizeof(int);

//     reverse( arr , n);

//     for(int i=0 ; i<n ; i++)
//     {
//         cout<<arr[i]<<",";
//     }

// return 0;
// }

//reversing an array withusing extra space...


int swap(int arr,int *s,int *e,int n)
{
    for(int i=0 ; i<n ; i++)
    {
         
    }

}


int main()
{
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;

    while(start<end)
    {
        swap(arr,start,end,n);
        start ++;
        end ++;
    }
    return 0;
}
