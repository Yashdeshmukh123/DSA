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

int func_2d_array(int row ,int size)
{
    int **ptr = new int*[row];
   
    for(int i=0 ; i<row ; i++)
    {
        ptr[i] = new int[size];
    }

    int x=1;
    for(int i=0 ; i<row ;i++)
    {
        for(int j=0 ; j<size ; j++)
        {
            ptr[i][j]=x++;
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
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

    int size,row;
    cout<<"enter no. of rows : ";
    cin>>row;
    cout<<"enter no. of cols : ";
    cin>>size;

    func_2d_array(row,size);

return 0;
}