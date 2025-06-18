#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "hello";
    cout<<str<<endl;
    str = "yellow";
    cout<<str<<endl;
    string str2;
    // cin>>str2;
    // getline(cin,str2);
    // cout<<str2<<endl;

    // loop in strings

    // for(char c : str)
    // {
    //     cout<<c<<endl;
    // }

    // different methods in strings
    string word = "i love c++ &java";
    cout<<str.length()<<endl;
    cout<<str.at(4)<<endl;
    cout<<str.substr(2,4)<<endl;

    cout<<str.find("c++")<<endl;



return 0;
}