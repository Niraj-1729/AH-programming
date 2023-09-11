#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count=0;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b==2|| b+c==2|| c+a==2)
        {
            count+=1;
        }
        
    }
    cout<<count;
    return 0;
}