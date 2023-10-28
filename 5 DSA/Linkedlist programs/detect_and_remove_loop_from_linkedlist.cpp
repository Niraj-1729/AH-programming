
class Solution {
public:

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            return slow;
        }
    }

    return NULL;
}
Node* getstart(Node * head){
    if(head==NULL){
        return NULL;
    }
    Node* intersect=floydDetectLoop(head);
    Node* slow=head;

      if(intersect == NULL){
        return NULL;
      }

    while(slow!=intersect){
        slow=slow->next;
        intersect=intersect->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
   if(head==NULL){
       return NULL;
   }
   Node* startofLoop=getstart(head);
   Node* temp=startofLoop;

       if(startofLoop == NULL){
        return head;
    }

   while(temp->next !=startofLoop){
       temp=temp->next;
   }
  temp->next=NULL;
  return head;
}


}
