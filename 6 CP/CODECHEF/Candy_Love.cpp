#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[n];
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count += a[i];
        }

        if (count % 2!= 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
