#include <iostream>
using namespace std;

class pattern
{
public:
    void pattern1(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern2(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern3(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    void pattern4(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }
    void pattern5(int n)
    {
        for (int i = n; i != 0; i--)
        {
            for (int j = i; j != 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    void pattern6(int n)
    {
        for (int i = n; i != 0; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    void pattern7(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j != i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= (i * 2) + 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    void pattern8(int n)
    {
        for (int i = n; i != 0; i--)
        {
            for (int k = i + 1; k <= n; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (i * 2) - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern9(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int k = n - 1; k != i; k--)
            {
                cout << " ";
            }
            for (int j = 1; j <= (i * 2) + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n; i != 0; i--)
        {
            for (int j = n; j != i; j--)
            {
                cout << " ";
            }
            for (int k = 1; k <= (i * 2) - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern10(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n - 1; i != 0; i--)
        {
            for (int j = 1; j != i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    void pattern11(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % 2 == 1)
                {
                    if (j % 2 == 1)
                    {
                        cout << "1";
                    }
                    else
                    {
                        cout << "0";
                    }
                }
                else
                {
                    if (j % 2 == 1)
                    {
                        cout << "0";
                    }
                    else
                    {
                        cout << "1";
                    }
                }
            }
            cout << endl;
        }
    }
    void pattern12(int n)
    {
        int space = 2*(n-1);
        for(int i=1 ; i<n ; i++)
        {
            for(int j = 1 ; j<=i; j++)
            {
                cout<<j;
            }
            for (int k = 2; k <=space ; k++)
            {
                cout << " ";
            }
            for(int j = i ; j>=1; j--)
            {
                cout<<j;
            }
            cout<<endl;
            space -=2;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    pattern p1;
    // p1.pattern1(n);
    // p1.pattern2(n);
    // p1.pattern3(n);
    // p1.pattern4(n);
    // p1.pattern5(n);
    // p1.pattern6(n);
    // p1.pattern7(n);
    // p1.pattern8(n);
    // p1.pattern9(n);
    // p1.pattern10(n);
    // p1.pattern11(n);
    p1.pattern12(n);
    return 0;
}