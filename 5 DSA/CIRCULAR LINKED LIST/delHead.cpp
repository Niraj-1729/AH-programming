#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void print(Node *head){
    if(head==NULL)
    return ;
    cout<<(head->data);
    Node *temp=head->next;
    while(temp!=head){
        cout<<" "<<(temp->data);
        temp=temp->next;
    }
}

Node  *len(Node *head){
    if(head==NULL)
    return NULL;
    if(head->next==head){
        delete(head);
        return NULL;
    }
    Node *curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=head->next;
    delete(head);
    return curr->next;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    
    print(len(head));
}