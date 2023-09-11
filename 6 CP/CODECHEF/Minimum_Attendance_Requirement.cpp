#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, total;
        float a;
        string binaryString;

        cin >> n;
        cin >> binaryString;

        // int length = binaryString.length();
        int countOne = 0;
        for (int i = 0; i <n; i++)
        {
        if (binaryString[i] == '1')
            {
                countOne++;
            }
        }
        cout<<countOne<<endl;
        total = (120 - n) + countOne;
        a = (total * 100) / 120;

        if (a >= 75)
         {
            cout << "YES" << endl;
         }
        else
         {
            cout << "NO" << endl;
         }
    }
    return 0;
}
