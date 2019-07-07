

// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
SinglyLinkedListNode* ptr,*p,*s;
int a=0,i=0;
for(ptr=head;ptr!=nullptr;ptr=ptr->next)
{
    a++;
}
int arr[a];
for(ptr=head;ptr!=nullptr;ptr=ptr->next)
{
    arr[i]=ptr->data;
    i++;
}
for(int j=a-1;j>=0;j--)
{
    cout<<arr[j]<<endl;
}


}


