#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    { 
        int x,y,z;
        cin>>x>>y;
        z=x*y;
        if (x<=8 && z<=500)
        {
            /* code */
            cout<<"YES"<<endl;

        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
     return 0;
}