#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y;
        if (y >= x / 2)
        {
            z = x / 2;
            cout<<z<<endl;
            // z=(x+y)/3;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
