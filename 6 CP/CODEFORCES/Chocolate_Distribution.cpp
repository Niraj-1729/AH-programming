#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x;
        y = x / 3;
        z = x - (2 * y);
        if(x%3==0){
            cout<<y-1<<" "<<y-1<<" "<<z+2<<endl;
        }
        else {
            cout << z << " " << y << " " << y << endl;
        }
    }
    return 0;
}
