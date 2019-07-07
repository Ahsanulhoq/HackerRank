

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode* p,*ptr;
p=new SinglyLinkedListNode(data);
int a=0;
if(head==NULL)
{
    head=p;
}
else
{
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
    {
        a++;
        if(a==position)
        {break;}
    }
    p->next=ptr->next;
    ptr->next=p;

}
return head;

}


