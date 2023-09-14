#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        for (int i = 0; i < n; i+3) {
            if(s[i]=='1'){
                if(i+2<n){
                    s[i+1]='0';
                    s[i+2]='0';
                }
            }
            /* code */
        }
        cout<<s<<endl;
    }
    return 0;
}
