#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int data){
        this -> data=data;
        this -> prev=NULL;
        this -> next=NULL;
    }
};

//traversing a linked list
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//length of linked list
int getlength(node* head){
    int length=0;
    node* temp = head;
    while(temp != NULL){
        length++;
        temp=temp->next;
    }
    return length;
}

//insert a node at head
void InsertAtHead(node* &head, int data){
    node* temp=new node(data);
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
    head=temp;
    
}
void InsertAtTail(node * &tail, int data){
    node* temp = new node(data);
    tail->next=temp;
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
    
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
    newnode -> next = temp -> next;
    temp -> next -> prev = newnode;
    temp -> next = newnode;
    newnode -> prev = temp;
}
//delete a node
void deleteNode(int position, node* &head){
    //deleting first node
    if(position==1){
        node* temp=head;
       
        temp -> next -> prev = NULL;
        head = temp -> next;
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

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr->next=NULL;
        
        delete curr;
    }
}

int main(){
    node* node1 = new node(5);

    node* head=node1;
    node* tail=node1;

    print(head);

    cout<<getlength(head)<<endl;

    InsertAtHead(head,12);

    print(head);

    InsertAtHead(head,15);

    print(head);

    InsertAtTail(tail,45);

    print(head);

    InsertAtTail(tail,23);

    print(head);

    InsertAtPosition(tail,head,2,45);

    print(head);

    InsertAtPosition(tail,head,1,100);

    print(head);
    
    InsertAtPosition(tail,head,8,60);

    print(head);

    deleteNode(1,head);

    print(head);

    deleteNode(7,head);

    print(head);

    deleteNode(3,head);

    print(head);


    return 0;
}
