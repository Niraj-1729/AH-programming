#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> s;
    // step 1:- put all element of queue in stack
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // step 2:- pop elements of stack and again push into the stack
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

void reverseQueueRecursion(queue<int> &q)
{
    // Base case
    if (q.empty())
    {
        return;
    }
    // step:- 1
    int temp = q.front();
    q.pop();
    // step:-2
    reverseQueueRecursion(q);
    // step:-3
    q.push(temp);
}

void reverseK(queue<int> &q, int k)
{
    // step:-1 queue to stack
    stack<int> s;
    int n = q.size();
    int count = 0;
    // edge case
    if (k == 0 || k > n)
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        count++;
        s.push(temp);
        if (count == k)
        {
            break;
        }
    }

    // step:- 2 stack to queue
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // step 3 push n-k elements of queue to the back of the queue
    count = 0;
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        if (count == n - k)
        {
            break;
        }
    }
}

void interLeave(queue<int> &q)
{
    // step 1 separate both the halfs
    int n = q.size();
    int k = n / 2;
    int count = 0;
    if (q.empty())
    {
        return;
    }
    queue<int> qutie;

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        qutie.push(temp);
        count++;
        if (count == k)
        {
            break;
        }
    }
    // step 2  start interleaving
    while (!q.empty() && !qutie.empty())
    {
        int first = qutie.front();
        qutie.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }
    //if n is odd 
    if (n&1)
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }
    
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6); 
    q.push(7);
    q.push(8);
    q.push(9);

    // reverseQueue(q);
    // reverseQueueRecursion(q);
    // reverseK(q, 5);
    interLeave(q);
    cout << "printing queue:- ";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}