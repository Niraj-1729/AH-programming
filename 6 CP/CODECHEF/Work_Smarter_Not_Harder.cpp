#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int l, v1, v2, t1, t2;
    cin >> l >> v1 >> v2;
     
    if (l % v1 == 0 )
    {
        t1 = l / v1;
    }
    else if (l % v2 == 0)
    {
        t2 = l / v2;
    }
    else if (l % v1 != 0)
    {
        t1 = (l / v1) + 1;
    }
    else if (l % v2 != 0)
    {
        t2 = (l / v2) + 1;
    }

    cout << t1 << t1;

    // }
    return 0;
}
