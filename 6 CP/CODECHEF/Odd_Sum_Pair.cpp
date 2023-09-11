// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    t++;
    while (t--)
    {
        int a, b, c, d,e,f;
        cin >> a >> b >> c;
        d = (a + b);
        e = (b + c);
        f = (a + c);

        if (d,e,f % 2 == 0)
        {
            /* code */
            cout << "YES" << endl;
        }
        

        else
        {
            cout << "NO";
        }
    }

    return 0;
}
