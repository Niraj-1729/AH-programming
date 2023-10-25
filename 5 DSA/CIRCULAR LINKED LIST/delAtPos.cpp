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

Node  *len(Node *head,int pos){
    int c=1;
    if(head==NULL)
    return NULL;
    if(head->next==head){
        delete(head);
        return NULL;
    }
    if(pos==1)
    {
        delete(head);
        return head->next;
    }
    Node *curr=head;
    while(c<pos)
    {
        curr=curr->next;
        c++;
    }
    curr->next=curr->next->next;
    delete(curr->next);
    return head;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    
    print(len(head,2));
}