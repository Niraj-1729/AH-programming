class Solution{
    public:
    int getLength(Node* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        }
        return count;
    }

    int getMiddle(Node *head)
    {
        int len=getLength(head);
        int ans=len/2;
        
        int count=0;
        Node* temp=head;
        while(count<ans){
            temp=temp->next;
            count++;
        }
        return temp->data;
    }
};
