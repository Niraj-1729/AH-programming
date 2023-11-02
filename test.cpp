#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (sum % n != 0)
        {
            cout << "NO" << endl;
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            if (sum % 2 != arr[i] % 2)
            {
                cout << "NO" << endl;
            }
        }
        cout<<"YES"<<endl;
    }

    return 0;
}
