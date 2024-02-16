// STL implementation

#include <iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creation
    stack<int> st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //remove
    st.pop();

    //check the top element
    cout<<"Element on top: "<<st.top()<<endl;

    //size
    cout<<"size of stack is: "<<st.size()<<endl;
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else cout<<"stack is not empty"<<endl;

    //print stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}