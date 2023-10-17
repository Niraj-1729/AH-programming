#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n, v1,v2,t1,t2;
        cin>>n>>v1>>v2;
        t1=(n*1.414)/v1;
        t2=(n/v2);
        if(t1<t2){
            cout<<"Stairs"<<endl;
        }
        else if(t1>t2){
            cout<<"Elevator"<<endl;
        }
        
    }
    return 0;
}
