// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c;
        if(a<b &&a<c) cout<<"ALICE"<<endl;
        if(b<a &&b<c) cout<<"BOB"<<endl;
        if(c<a &&c<b) cout<<"CHARLIE"<<endl; 
    }
    return 0;
}
