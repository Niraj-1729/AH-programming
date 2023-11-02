#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};

//insert a node at head
void InsertAtHead(node* &head, int data){
    node* temp=new node(data);
    temp -> next = head;
    head = temp;
}

//insert a node at tail
void InsertAtTail(node * &tail, int data){
    node* temp = new node(data);
    tail -> next=temp;
    tail=tail->next;
}

//insert node at position
void InsertAtPosition(node* &tail, node* &head, int position, int d){
    //insert at position 1
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    node* temp=head;
    int count=1;
    while(count < position-1){
        temp=temp->next;
        count++;
    }

    //insert at position last
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    //createing a node for d
    node* newnode = new node(d);
    newnode->next=temp->next;
    temp->next=newnode;
}

//delete a node
void deleteNode(int position, node* &head){
    //deleting first node
    if(position==1){
        node* temp=head;
        head=head->next;
        //memory free first node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting an middle or last node
        node* curr=head;
        node* prev=NULL;

        int count=1;
        while(count < position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

//reverse a ll
void reverseLinkedList(node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }
    node* prev=NULL;
    node* curr=head;
    node* forward=NULL;

    while(curr != NULL){
        forward = curr -> next ;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    head=prev;
}

//traversing a linked list
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
   node* node1 = new node(5);

    node* head=NULL;

    node* tail=node1;

    print(head);

    InsertAtHead(head,10);

    print(head);

    InsertAtHead(head,15);

    print(head);

    InsertAtTail(tail,20);

    print(head);

    InsertAtTail(tail,25);

    print(head);

   // cout<<endl;

    InsertAtPosition(tail,head,4,50);

    print(head);

    deleteNode(6,head);

    print(head);

   return 0;
}
