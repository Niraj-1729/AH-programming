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

int len(Node *head){
    int c=0;
    if(head==NULL)
    return c;
    c=1;
    Node *temp=head->next;
    while(temp!=head){
        c++;
        temp=temp->next;
    }
    return c;
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    
    cout<<len(head);
}