#include <iostream>
 
using namespace std;

#define MAX 100
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[MAX], m = MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = min(m, a[i]);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            while (a[i] > m)
            {
                a[i] /= 2;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
 