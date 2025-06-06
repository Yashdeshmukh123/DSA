#include <iostream>
using namespace std;

void max_subrray_sum(int arr[],int n)
{
    int maxsum = INT32_MIN ;

    for(int start=0 ; start<n ; start++)
    {
        int sum=0;
        for(int end=start ; end<n ; end++)
        {
            sum = sum+ arr[end];
        }
        // cout<<sum<<endl;
        
        maxsum = max(maxsum,sum);
    }
    cout<<"max subarray sum is "<<maxsum<<endl;

}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    max_subrray_sum(arr,n);
return 0;
}

//Mistakes - second loop mai equalsto ka sign nhi lagana tha
