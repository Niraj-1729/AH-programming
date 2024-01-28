// insertion and deletion in linked lsit
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
    Node *new_node = new Node(val); // creating a node
    new_node->next = head;
    head = new_node;
    // O(1)
}

void insertAtEnd(Node *&head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp has reached last node
    temp->next = new_node;
    // O(n)
    // and when tail pointer is given then time complexity is O(1)
}

void insertAtPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtEnd(head, val);
        return;
    }

    Node *new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1)
    {
        temp = temp->next;
        current_pos++;
    }
    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
    // average_case O(pos);
    // worst_case O(n)
}

void updateAtPosition(Node *&head, int k, int val)
{
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos != k)
    {
        temp = temp->next;
        curr_pos++;
    }
    // temp will be pointing at kth node
    temp->val = val;
}

void display(Node *head) // passing head node
{
    Node *temp = head; // pointer
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteAtHead(Node *&head)
{
    Node *temp = head; // node to be deleted
    head = head->next;
    free(temp);
    // O(1)
}

void deleteAtEnd(Node *&head)
{
    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    // now second_last points to second last
    Node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
    // O(n) in all case even if the tail is given
}

void deleteAtPosition(Node *&head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }
    int curr_pos = 0;
    Node *prev = head;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    Node *temp = prev->next; // node to be deleted
    prev->next = prev->next->next;
    free(temp);
    // best case O(1), deletion at head
    //  worst case O(n)
}

int main()
{
    Node *head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    insertAtEnd(head, 3);
    display(head);
    insertAtPosition(head, 4, 2);
    display(head);
    updateAtPosition(head, 2, 5);
    display(head);

    // deleteAtHead(head);
    // display(head);
    // deleteAtEnd(head);
    // display(head);
    deleteAtPosition(head, 1);
    display(head);

    return 0;
}