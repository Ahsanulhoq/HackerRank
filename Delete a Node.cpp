

// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode* ptr,*p;
int a=0;
if(position==0)
{
    head=head->next;
}
else{
for(ptr=head;ptr!=NULL;ptr=ptr->next)
{
    a++;
    if(a==position)
    {
        break;
    }

}
p=ptr->next;
ptr->next=p->next;
}

return head;
}


