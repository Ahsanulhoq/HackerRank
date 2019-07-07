

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode* p,*ptr;
int a=1;
for(ptr=head1,p=head2;ptr!=NULL,p!=NULL;ptr=ptr->next,p=p->next)
{

    if(ptr->data!=p->data)
    {
        a=0;
        break;

    }
    if(p->next==NULL && ptr->next!=NULL)
    {
        a=0;
    }




}
return a;

}


