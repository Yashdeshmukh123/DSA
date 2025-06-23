#include <iostream>
using namespace std;


int* func()
{
    int *ptr = new int ;
    *ptr = 1200;

    cout<<ptr<<endl;
    // delete ptr;

    return ptr;
}

int func_2d_array(int size)
{
    int *ptr1 = new int[size];
    for(int i=0 ; i<size ; i++)
    {
        cin>>ptr1[i];
        // ptr1[i] = i;
        // cout<<ptr1[i];
    }
    for(int i=0 ; i<size ; i++)
    {
        cout<<ptr1[i];
        // ptr1[i] = i;
        // cout<<ptr1[i];
    }
}

int main(){
    // int size;
    // cin>>size;
    // int *arra ;
    // int *arr = new int[size];

    // // int  x=1;
    // for(int i=0 ; i<size ; i++)
    // {
    //     arr[i] = i+1;
    //     cout<<arr[i]<<" ";
    //     //x++;
    // }
    // cout<<endl;


    // int *x = func();
    // cout<<*x<<endl;
    // cout<<x<<endl;

    int size;
    cin>>size;
    func_2d_array(size);

return 0;
}