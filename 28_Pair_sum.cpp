#include <iostream>
#include <vector>
using namespace std;


//leetcode no. 167 - sum of the no. in an given vector array ,and the target sum always be present in the array....

vector<int> pairsum(vector<int> arr , int target)
{
    int start = 0;
    int end = arr.size()-1;
    int currsum = 0;
    vector<int> ans;
    while(start<end)
    {
        currsum = arr[start] + arr[end];
        if(currsum==target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(currsum>target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
}


int main(){
    vector<int> vect = {2,7,11,15};
    vector<int> ans = pairsum(vect,13);
    cout<<ans[0]<<" "<<ans[1]<<endl;
return 0;
}