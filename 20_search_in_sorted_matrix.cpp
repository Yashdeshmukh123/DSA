#include <iostream>
using namespace std;


// brute force approach

// void searchinsortedarr(int arr[][4],int n , int m)
// {
//     int key=33;
//     for(int i=0 ; i<n ; i++)
//     {
//         for(int j=0 ; j<m ; j++) 
//         {
//             if(key==arr[i][j])
//             {
//                 cout<<"row : "<<i<<endl;
//                 cout<<"column : "<<j<<endl;

//             }
//         }
//     }
// }


//row and col wise binary search


// int searchinsortedarr(int arr[][4],int n , int m)
// {
//     int key = 77;
//     for(int i=0 ;i<n ; i++)
//     {
//         int start = 0 ;
//         int end = m-1;
//         while(start<=end)
//         {
//          int mid = (start+end)/2;  
//         if(arr[i][mid]==key)
//         {
//             cout<<"row : "<<i<<endl;
//             cout<<"column : "<<mid<<endl;
//             return 1;
//         }
//         else if(arr[i][mid]<key)
//         {
//             start = mid+1;
//         }
//         else if(arr[i][mid]>key)
//         {
//             end = mid-1;
//         }
//         }

//     }
//     cout<<"element not found"<<endl;
// }


bool searchinsortedarr(int arr[][4],int n,int m,int key)
{
    int row = 0;
    int col = m-1;
    
    
    while(row<n && col>=0)
    {
        int start = arr[row][col];
        if(arr[row][col]==key)
        {
            cout<<"key found at ... =  "<<row<<","<<col<<endl;
            return true;
        }
        else if(arr[row][col]>key)
        {
            col--;
        }
        else
        {
            row++;
        }    
    }
    cout<<"not found...";
    return false;
}


int main(){
    int arr[4][4] = {
                     {10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}
     };
     
    searchinsortedarr(arr,4,4,33);
return 0;
}