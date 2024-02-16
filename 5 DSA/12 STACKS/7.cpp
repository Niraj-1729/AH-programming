// reverse a stack
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    // rec call
    insertAtBottom(s,target);
    // BT
    s.push(topElement);

}

void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
    { 
        return;
    }

    int target = s.top();
    s.pop();
    // reverse stack (rec call)
    reverseStack(s);
    // BT
    insertAtBottom(s,target);

}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    reverseStack(st);
    cout<<"After reverse: ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}