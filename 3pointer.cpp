#include <iostream>
using namespace std;

void changeA(int *p){
    *p = 398;
    cout<< *p <<endl;
}


int main(){
    // int a =19;
    // cout<<&a<<endl;

    // int *ptr ;
    // ptr= &a ;
    // cout<< ptr <<" = " <<&a<<"\n";

    // int **pptr = &ptr;
    // cout<< pptr <<" = " <<&ptr<<endl ;

    // *ptr = 20 ;
    // cout<<"change = "<<a<<endl;

    // changeA(&a);

    int a = 32;
    int *ptr = &a;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    char ch = 'A';
    char &cho = ch ;
    cout<<cho<<endl;
    cout<<&cho<<endl;

    cho += a;
    *ptr += ch;
    cout<<a<<" , "<<ch<<endl;
    //    cout<<<<endl;
    return 0 ;
}
