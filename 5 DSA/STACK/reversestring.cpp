#include<iostream>
#include<stack>
#include<string>
using namespace std;

char * reverse(char*str, int len){
    stack<char>st;
    for(int i=0;i<len;i++){
        st.push(str[i]);

    }
    for(int i=0;i<len;i++){
        str[i]=st.top();
        st.pop();
    }
    return str;
}

int main(){
    char s[1000];
    cin>>s;
    char*ch=reverse(s,5);
    
    cout<<ch<<" ";
    
}