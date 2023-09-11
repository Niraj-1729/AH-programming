#include <bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = n - 1; i = 1; i--)
        {
            if (a[i] != a[i - 1])
            {
                cout<<a[i]+a[i-1]<<endl;
            }
            else
            {
                continue;
            }
            
        }
    }
return 0;
}
