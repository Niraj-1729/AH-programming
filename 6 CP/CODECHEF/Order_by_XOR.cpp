#include <iostream>
using namespace std;

int findX(int a, int b, int c)
{
    int maxVal = max(max(a, b), c);
    int mask = 1;
    while (mask <= maxVal)
    {
        mask <<= 1;
    }
    mask -= 1;
    int x = 0;
    while (true)
    {
        int res1 = a ^ x;
        int res2 = b ^ x;
        int res3 = c ^ x;
        if (res1 < res2 && res2 < res3)
        {
            break;
        }
        x |= (mask ^ (res1 ^ res2 ^ res3));
        if (x > maxVal)
        {
            return -1;
        }
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        int a, b, c;
        cin >> a >> b >> c;
        int x = findX(a, b, c);
        if (x == -1)
        {
            cout << "No solution found." << endl;
        }
        else
        {
            cout << "The value of x is " << x << endl;
        }
    }

    int a, b, c;
    cin >> a >> b >> c;
    int x = findX(a, b, c);
    if (x == -1)
    {
        cout << "No solution found." << endl;
    }
    else
    {
        cout << "The value of x is " << x << endl;
    }
    return 0;
}