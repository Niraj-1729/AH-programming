#include<iostream>
using namespace std;

class Node {
    public:

 int val;
 Node* next;

  Node (int data){
    val = data;
    next = NULL;
  }
};
 
 class  linklist{
    public:
    Node  * head;
    linklist(){

   head = NULL;
    }

void insertattail(int value){
    Node* new_node = new Node(value);
    if (head == NULL){
        head = new_node;// head ko hi new node maan liya 
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
 } 
    temp->next= new_node;

    }
void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;

    } cout<< "NULL"<<endl;
}

};

 void deleteduplicatenodes(Node* &head){ 
    Node * curr_node = head;
    while( curr_node ){ //ye traverse krr rhe hai  lat tak  
   while  ( curr_node->next  && curr_node->val == curr_node->next->val){
    //DELETE CURRENT NEXT
    Node* temp = curr_node->next;
    curr_node->next= curr_node->next->next;
    free(temp);

   }
    // YE LOOP TAB LHATAM HOGA JAB VA;UE DIIFRENT AYEGI CURRENT KI  AND USKE NEXT KI 
     // LL KHATAM 
  curr_node = curr_node->next;  } 
     
 };
 
int main()
{
linklist ll;
ll.insertattail(1);
ll.insertattail(2);
ll.insertattail(2);
ll.insertattail(3);
ll.insertattail(3);
ll.insertattail(3);
ll.display();
deleteduplicatenodes(ll.head);
ll.display();
 return 0;
}