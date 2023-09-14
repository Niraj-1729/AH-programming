#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,C,x,y;
        cin>>a>>b>>c>>d;
        x=a-b;
        y=c-d;
        C=x+y;
        if(C<0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
