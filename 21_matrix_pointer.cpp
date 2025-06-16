#include <iostream>
using namespace std;

void matrix_pointer(int mat[][4])
{
    // cout<<mat<<endl;
    // cout<<mat[0][0]<<endl;
    // cout<<&mat[0][0]<<endl;
    // cout<<mat+1<<endl;
    // cout<<(&mat[0][0])+1<<endl;
    // cout<<&mat[0][1]<<endl;

    cout<<"0th row pointer = "<<mat<<endl;
    cout<<"1th row pointer = "<<(mat+1)<<endl;
    cout<<"2th row pointer = "<<(mat+2)<<endl;
    
    cout<<"0th row value = "<<*mat<<endl;
    cout<<"1th row value = "<<*(mat+1)<<endl;
    cout<<"2th row value = "<<*(mat+2)<<endl;
    
    cout<<"0th row value = "<<*(*(mat+2)+3)<<endl;
    cout<<"1th row value = "<<*(mat+1)<<endl;
    cout<<"2th row value = "<<*(mat+2)<<endl;
    
    
}

int main(){
    int mat[4][4] = {
                     {1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}
    };
    matrix_pointer(mat);
    
return 0;
}