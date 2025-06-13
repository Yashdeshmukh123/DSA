#include <iostream>
using namespace std;

void findone(int n, int m)
{
    int count = 0;
    for(int i=n ; i<=m ;i++)
    {
        int temp=i;
        while(temp!=0){
            if(temp%10==1){
                count++;
            }
            // else{
            //     temp=temp/10;
            // }
            temp=temp/10;
        }
        // i=temp;
    }
        // int j=i;
        // while(j!=0)
        // {
            
        //     if(i==1){
        //         count++;
        //     }
        // }
        // for(int  j=i ; j!=0 ; j=j/10)
        // {
        //      int rev = j%10;
        //      if(rev==1)
        //      {
        //         count++;
        //      }
        // }
        
    cout<<count;
}

int main(){
    // int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13};
    // int n = 14;
    findone(0,13);
return 0;
}