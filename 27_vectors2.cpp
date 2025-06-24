#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> vect1;
    // cout<<vect1.size();

    vector<int> vect2 = {1,2,3,4};
    // for(int i=0 ;i<vect2.size();i++)
    // {
    //     cout<<vect2[i]<<endl;
    // }

    // vector<int> vect3(5,-1);
    // for(int i=0 ;i<vect3.size();i++)
    // {
    //     cout<<vect3[i]<<endl;
    // }

    cout<<"size : "<<vect2.size()<<endl;
    cout<<"capacity : "<<vect2.capacity()  <<endl;

    vect2.push_back(5);
    cout<<"size : "<<vect2.size()<<endl;
    cout<<"capacity : "<<vect2.capacity()  <<endl;



    
return 0;
}