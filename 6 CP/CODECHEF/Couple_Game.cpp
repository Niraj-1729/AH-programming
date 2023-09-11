#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b;
        if (a>b)
        {
            /* code */
            c=a-b;
            cout<<c<<endl;
        }
        else{
            c=b-a;
            cout<<c<<endl;
        }
        

    }

    return 0;
}