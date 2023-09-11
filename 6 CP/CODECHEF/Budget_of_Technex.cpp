#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, a, b;
        cin >> r;
        r=1000*r;
        a = (r / 2);
        b = (a / 5);
        cout << b << endl;
    }

    return 0;
}