

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode *p,*ptr;
 p=new SinglyLinkedListNode(data);
 if(head==NULL)
 {
     head=p;
 }
 else{
    for(ptr=head;ptr->next!=NULL;ptr=ptr->next);
 ptr->next=p;
 }
return head;
}


