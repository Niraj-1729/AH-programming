#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int t,m,d,n;
        cin>>t>>m>>d;
        n=m*d;
        if(n>=t){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
