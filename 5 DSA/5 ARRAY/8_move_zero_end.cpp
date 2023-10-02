#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZero(int n, vector<int> a)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();

    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }

    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }

    return a;
}

vector<int> optMz(int n, vector<int> a){
     int j=-1;
     for (int i = 0; i < n; i++)
     {
        if (arr[i]==0)
        {
            j=i;
            break;
        }
        
     }

     if (j==-1)
     {
        return a;
     }

     for (int i = j+1; i < n; i++)
     {
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
     }
     
     
     
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 0, 3, 0, 4, 0, 55, 12, 0};
    int n = arr.size();
    vector<int> ans = moveZero(n, arr);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}