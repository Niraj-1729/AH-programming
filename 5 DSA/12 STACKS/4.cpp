// reverse a string using stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "artificial human";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}