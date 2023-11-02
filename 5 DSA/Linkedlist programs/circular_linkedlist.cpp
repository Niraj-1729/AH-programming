#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

//insert a node at head
void InsertNode(node* &tail, int element, int data){

    //if list is empty
    if(tail == NULL){
        node* newnode = new node(data);
        tail = newnode;
        newnode -> next = newnode;
    }
    else{
        //non empty list
        node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        //element found
        node* temp = new node(data);
        temp -> next = curr  -> next;
        curr -> next = temp;
    }
} 

//delete a node
void deleteNode(node* &tail,int value){
    //empty list
    if(tail == NULL){
        cout<<"List empty"<<endl;
        return;
    }
    else{
        //non empty list
        node* prev=tail;
        node* curr=prev->next;

        while(curr -> data != value){
            prev=curr;
            curr=curr->next;
        }
        prev->next = curr->next;

        //1 noode only
        if(curr==prev){
            tail=NULL;
        }
        //2 or more node 
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
              
    }
}

//traversing a linked list
void print(node* &tail){
    node* temp = tail;

    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);

    cout<<endl;
}

int main(){
    
    node* tail = NULL;

    InsertNode(tail,5,3);
    print(tail);
 
    // InsertNode(tail,3,5);
    // print(tail);

    // InsertNode(tail,5,7);
    // print(tail);

    // InsertNode(tail,7,9);
    // print(tail);

    // InsertNode(tail,5,6);
    // print(tail);

    // InsertNode(tail,9,10);
    // print(tail);

    // InsertNode(tail,3,4);
    // print(tail);

    // deleteNode(tail,3);
    // print(tail);

  
   
    return 0;
}
