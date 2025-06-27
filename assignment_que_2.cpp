#include <iostream>
using namespace std;

void numberof7(int arr2[][3],int n ,int m)
{
    int count =0 ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ;j++)
        {
            if(arr2[i][j]==7)
            {
                count++;
            }
        }
    }
    cout<<count;
}

void sumofsecondrow(int arr1[][3],int n , int m)
{

    int sum =0 ;
    for(int i=0 ; i<m ;i++)
    {
        
        sum += arr1[1][i];
        
    }
    cout<<sum;
}

void transposeofmatrix(int arr2[][3] , int n , int m)
{
    int transpose[m][n];
    for(int i=0 ; i<n ;i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            transpose[j][i]= arr2[i][j];
        }
    }
    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}


void construct2DArray(int arr3[4] ,int n ,int m)
{
    int arr[n][m];
    int index = 0;
    if((n*m) == sizeof(arr3))
    {
         for(int i=0 ; i<n ; i++)
        {
             for(int j=0 ; j<m ; j++)
            {
                arr[i][j] = arr3[index];
                index++;
            }
        }
    }
    else
    {
        arr[n][m] = {(0)};
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}



int main(){
    int arr1[3][3] = {{1,4,9},
                    {11,4,3},
                    {2,2,3}
    };
    // sumofsecondrow(arr1,3,3);

    int arr2[2][3] = {{4,7,8},
                        {8,8,7}};

    // numberof7(arr2,2,3);

    // transposeofmatrix(arr2,2,3);

    int arr3[4] = {1,2,3,4};

    construct2DArray(arr3,2,2);

    
return 0;
}
// leetcode question no. 2022
// leetcode question no. 48

