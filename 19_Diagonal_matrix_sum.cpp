#include <iostream>
using namespace std;


int diagonalsum(int arr1[3][3],int n )
{
    int  sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        sum += arr1[i][i];
        if(i != n-i-1)
        {
            sum+= arr1[i][n-i-1];
        }
    }

    cout<<sum;
}
 
int main(){
    int arr[4][4] = {  {1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
                    };
    
                    
    int arr1[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};

    diagonalsum(arr1,3);
return 0;
}