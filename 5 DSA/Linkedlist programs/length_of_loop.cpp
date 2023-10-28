int countNodesinLoop(struct Node *head)
{
    if(head==NULL){
        return NULL;
    }
    int len = 1;
    Node *slow = head;
    Node* fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next; 
        fast = fast->next->next;
        if(slow == fast)
        {   
            Node *temp = slow;
            slow = slow->next;
            while(slow!=temp)
            {
                len++;
                slow = slow->next;
            }
            return len;
        }
    }
    return 0;
}
