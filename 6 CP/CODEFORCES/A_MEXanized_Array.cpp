#include <iostream>
#include <vector>
using namespace std;




int MadhurWedsAnjali(int n, int k,int x)
{

        vector<int> v;
        if(n<k || k-x>1)
        {
            return -1;
        }

        for (int i = 0; i < k; i++)
        {
            
         v.push_back(i);
        }

        if(k!=x)
        {
             for(int i=k;i<n;i++)
            {
                v.push_back(x);
            }
        }
       else if(k==x)
       {
            for(int i=k;i<n;i++)
            {
                v.push_back(x-1);
            }
       }

        int res=0;
        for(int i=0;i<n;i++)
        {
            res = res+v[i];
        }

        return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        int m=MadhurWedsAnjali(n,k,x);
        cout<<m<<endl;
        
    }

    return 0;
}