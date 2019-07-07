

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
SinglyLinkedListNode* h1=head1,*h2=head2,*ptr,*str,*l,*k;
SinglyLinkedList s1;
for(h1;h1!=NULL;h1=h1->next)
{
    s1.insert_node(h1->data);
}
for(h2;h2!=NULL;h2=h2->next)
{
    s1.insert_node(h2->data);
}
int q=0,w=0;
for(ptr=s1.head;ptr!=NULL;ptr=ptr->next)
{
    q++;

}
int arr[q];
int i=0;
for(i=0,ptr=s1.head;i<q;i++,ptr=ptr->next)
{
    arr[i]=ptr->data;

}
sort(arr,arr+q);
int j=0;
for(l=s1.head;l!=NULL;l=l->next)
{
    l->data=arr[j];
    j++;

}
return s1.head;

}


