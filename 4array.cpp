#include <iostream>
using namespace std;

//passing array as a pointer (call by reference)...

void array(int *arr){
    cout<<&arr<<endl;
    arr[1] = 10;
}

int main()
{
    int arr[]={5,4, 6, 9 ,2};
    cout<<arr[1]<<endl;
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;

    array(arr);
    cout<<arr[1]<<endl;
    return 0;
}