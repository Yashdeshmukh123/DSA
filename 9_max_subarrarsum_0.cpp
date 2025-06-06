#include <iostream>
using namespace std;

void max_subrray_sum(int arr[], int n)
{
    int sum=0;
    int maxsum = INT32_MIN ;

    //if we wannt to find a miximun sum or any thing we should initialise a variable as INT_MIN (-inf.)....

    for(int start=0 ; start<n ; start++)
    {
        for(int end=start ; end<n ; end++)
        {
            int sum=0;
            for(int i=start ; i<=end ; i++)
            {
                sum = sum + arr[i];
                // cout<<sum<<" ";
            }
            cout<<sum<<" ";  
            maxsum = max(maxsum,sum);
        }
        cout<<endl;
    }
    cout<<"max subarray sum is "<<maxsum<<endl;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    max_subrray_sum(arr,n);
return 0;
}

//Mistakes - inistialisation of maxsum