#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    vector<int> arr = {2, 3};
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);

    Node *current = head;
    while (current != NULL)
    {
        cout << head << " ";
        cout << head->data << " ";
        current=current->next;
    }
    return 0;
}