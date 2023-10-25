#include<iostream>
#include<stack>
#include<string>
using namespace std;

void solve(stack<int>&st,int cnt,int size){
    //base case
    if(cnt==size/2){
        st.pop();
        return;
    }
    int num=st.top();
    st.pop();
    //recursive call
    solve(st,cnt+1,size);
    st.push(num);

}
void deleteMiddle(stack<int>&s,int N){
    int c=0;
    solve(s,c,N);

}
void middle(stack<int>&s,int size){
    if(size==0){
        return;
    }
    stack<int>st;
    int cnt=0;
    while(cnt<size/2){
        int topele=s.top();
        st.push(topele);
        s.pop();
        cnt++;
    }
    s.pop();
    while(!s.empty()){
        int topele=s.top();
        st.push(topele);
        s.pop();
        
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    // deleteMiddle(st,6);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    middle(st,6);
    return 0;
}