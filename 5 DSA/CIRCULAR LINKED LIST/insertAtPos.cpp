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

Node  *len(Node *head,int data,int pos){
    Node *temp=new Node(data);
	
}

int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    
    print(len(head,40));
}