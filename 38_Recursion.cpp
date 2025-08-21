#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return (n * factorial(n - 1));
}

int decorder(int n)
{
    if (n < 0)
    {
        return 1 ;
    }
    cout << n << " ";
    decorder(n - 1);
}

int main()
{

    // int a = factorial(5);
    // cout << a;
    decorder(5);
    return 0;
}