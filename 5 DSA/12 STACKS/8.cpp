// insert elemnt in sorted stack

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    // step 1 
    int topElement = s.top();
    // remove element
    s.pop();
    //do recursion
    insertSorted(s, target);

    // BT
    s.push(topElement);
}

void sortStack(stack<int> &st){
    //base case 
    if(st.empty()){
        return;
    }
    int topElement=st.top();
    st.pop();

    sortStack(st);
    insertSorted(st, topElement);


}

int main()
{
    stack<int> s;
     s.push(5);
     s.push(2);
     s.push(7);
     s.push(11);
     s.push(3);
    sortStack(s);

    int target = 6;
    insertSorted(s, target);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
