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
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
        count++;
    }
    cout << "NULL" << endl;
    cout << "Length of linked list is:- " << count << endl;
}

Node *reverseLL(Node *&head)
{
    Node *prevptr = NULL;
    Node *currptr = head;
    // currptr->next=prevptr
    //move all 3 parts by one step ahead
    while (currptr != NULL)
    {
        Node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    //now when this loop ends, prevptr pointing to my last node which is now head 
    Node* new_head=prevptr;
    return new_head;

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