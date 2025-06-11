#include <iostream>
using namespace std;

void spiralmatrix(int arr[][4],int n , int m)
{
    int srow=0;
    int scol=0;
    int erow=n-1;
    int ecol=m-1;

    while(srow <=erow && scol<=ecol)
    {
        //top
        for(int i=scol;i<=ecol ;i++)
        {
            cout<<arr[srow][i]<<" ";
        }

        //right

        for(int i=srow+1 ; i<=erow;i++)
        {
            cout<<arr[i][ecol]<<" ";
        }
        
        //botttom

        for(int i=ecol-1 ; i>=scol;i--)
        {
            if(srow == erow)
            {
                break;
            }
            cout<<arr[erow][i]<<" ";
        }

        //left

        for(int i=erow-1 ; i>=srow+1 ;i--)
        {
             if(scol == ecol)
            {
                break;
            }
            cout<<arr[i][scol]<<" ";
        }
        srow++;
        scol++;
        ecol--;
        erow--;

    }

}


int main(){

    int arr[4][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                    //  {13,14,15,16}
                    };
    
    spiralmatrix(arr,3,4);

return 0;
}


//Mistakes - yaha pe bottom loop wapas se run ho ja rha tha to isliye wah pe if condition lagana jaruri hai 
//         - nhi to phir loop repeat pe chal  jayega 
