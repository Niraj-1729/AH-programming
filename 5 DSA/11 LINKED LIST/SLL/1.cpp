// making a node in linked list
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // cunstructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int main(){
    Node* n= new Node(1); // creation of object
    cout<<n->data<<" "<<n->next;
    return 0;
}