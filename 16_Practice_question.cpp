//sort an character array by using insertion sort algoruithum in descending order 

#include <iostream>
using namespace std;

int sortcharacter(char arr[] , int n)
{

    for(int i=1 ; i<n ; i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]<curr)
        {
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
   
}


int main(){
    char arr[6] = {'f','b','a','e','c','d'};
    int  n = sizeof(arr)/sizeof(char);
    sortcharacter(arr,n);
return 0;
}