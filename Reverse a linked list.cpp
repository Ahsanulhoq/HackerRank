

// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
SinglyLinkedListNode* p,*ptr;
SinglyLinkedList d;
int a=0;
for(ptr=head;ptr!=nullptr;ptr=ptr->next)
{a++;}
int arr[a],i;
for(i=0,ptr=head;i<a;ptr=ptr->next,i++)
{
    arr[i]=ptr->data;

}
for(int i=a-1;i>=0;i--)
{
    d.insert_node(arr[i]);
}
return d.head;
}


