// creating a node in doubly linked list
// linked list traversal

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void insertAtpos(int val, int k)
    {
        Node *temp = head;
        // assuming  k is less or eual to length of doubly linked list
        int count = 1;
        while (count < (k - 1))
        {
            temp = temp->next;
            count++;
        }
        // temp will point to the node at (k-1)th node
        Node *new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        temp->next->prev = new_node;
        return;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        { // there is no node
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        { // if doubly linked list has only one node
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        free(temp);
    }

    void deleteAtTail()
    {
        if (head == NULL)
        { // No node
            return;
        }
        Node *temp = head;
        tail = tail->prev;
        if (tail == NULL)
        { // only one node
            head = NULL;
        }
        else
        { // more than one node
            tail->next = NULL;
        }
        free(temp);
    }

    void deleteAtPos(int pos)
    {
        // assuming that pos is <= length of dll
        Node *temp = head;
        int counter = 1;
        while (counter < pos)
        {
            temp = temp->next;
            counter++;
        }
        // now temp is pointing to at kth node
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
        return;
    }
};


int main()
{
    // Node* new_node= new Node(3); creation of new node

    DoublyLinkedList dll;
    // dll.insertAtStart(1);
    // dll.insertAtStart(2);
    // dll.insertAtStart(3);
    // dll.insertAtStart(4);
    // dll.display();

    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.display();
    dll.insertAtpos(9, 4);
    dll.display();
    // dll.deleteAtHead();
    // dll.display();
    // dll.deleteAtTail();
    // dll.display();
    // dll.deleteAtPos(3);
    // dll.display(); 

    return 0;
}