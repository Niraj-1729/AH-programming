#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         m=2*n;
         
         int a[n];
         int b[n];
         int f[m];
         
         for (int i = 0; i < n; i++) {
             cin>>a[i];
             f[i]=a[i];
         }
         
         int k=i;
         
         for (int i = 0; i < n; i++) {
            cin>>b[i];
            f[k]=b[i];
            k++
         }
         
         
        
    }
    return 0;
}
