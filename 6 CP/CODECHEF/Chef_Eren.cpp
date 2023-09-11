#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int e, a, b, d;
        cin >> e >> a >> b;
        if (e % 2 == 0)
        {
            d = ((e / 2) * a) + ((e / 2) * b);
            cout << d << endl;
        }

        else{
            d=(((e-1)/2)*a)+(((e+1)/2)*b);
            cout<<d<<endl;
        }
    }
    return 0;
}