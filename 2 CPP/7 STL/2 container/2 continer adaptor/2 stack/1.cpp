#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Niraj");
    s.push("Kumar");
    s.push("Singh");
    cout<<"Top element:- "<<s.top();
    cout<<endl;
    s.pop();
    cout<<endl;
    cout<<"Top element:- "<<s.top();
    cout<<endl;
    cout<<"Size of stack"<<s.size()<<endl;
    cout<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
    cout<<endl;

    return 0;
}