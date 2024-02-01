// length of linked list

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void display(Node *head)
{
    Node *temp = head;
    int count=0;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
        count++;
    }
    cout << "NULL" << endl;
    cout<<"Length of linked list is:- "<<count<<endl;
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    display(head);

    return 0;
}