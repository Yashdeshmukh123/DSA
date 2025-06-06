
//kadane's algo...

#include <iostream>
using namespace std;

void max_subrray_sum(int arr[],int n)
{
    int maxsum = INT32_MIN ;
    int sum=0;
    for(int start=0 ; start<n ; start++)
    {
        sum = sum + arr[start];
        maxsum = max(maxsum,sum);
        if (sum<0)
        {
            sum=0;
        }
        
    }
    cout<<"max subarray sum is "<<maxsum<<endl;

}

int main(){
    int arr[] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    max_subrray_sum(arr,n);
return 0;
}

//Mistakes - condition was wrong in if statement..