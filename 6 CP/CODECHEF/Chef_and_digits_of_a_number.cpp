// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
        string str;
        cin >> str;
        int n= str.length();
        cout<<n;
        int counto = 0;
        int countz = 0;
        int sum = 0;
        for (int i = 0; i <n ; i++)
        {
            sum =sum+str[i];
        }
        cout<<sum<<endl;
        counto=sum;
        countz=n-sum;
        cout<<counto<<" "<<countz<<endl;
        if (counto==n)
        {
            cout<<"No"<<endl;
        }
        else if (countz==0)
        {
            cout<<"No"<<endl;
        }
        else if (counto==n-1 && countz==1)
        {
            cout<<"Yes"<<endl;
        }
        else if (counto==1 && countz==n-1)
        {
            cout<<"Yes"<<endl;
        }

        else{
            cout<<"No"<<endl;
        }

        
    // }

    return 0;
}
