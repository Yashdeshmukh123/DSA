#include <iostream>
using namespace std;

// linear Search Problem...
// linear search canbe applied into both sorted array or unsorted array...

//it uses linear time complexity with big O of n 'O(n)' ...

int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            // cout<<"the key is at index no. "<<i<<endl;
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {2, 16, 3, 14, 7, 20};
    int key;
    cin >> key;

    int n = sizeof(arr) / sizeof(int);

    cout<<search(arr, n, key)<<endl;

    return 0;
}