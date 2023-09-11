#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int total_char= str.length();
        if (total_char>10)
        {
               cout<<str[0]<<total_char-2<<str[total_char-1]<<endl;
        }
        else{
            cout<<str<<endl;
        }
        
    }
    return 0;
}








 