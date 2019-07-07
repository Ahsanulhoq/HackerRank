

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	SinglyLinkedListNode* p, *ptr;
    p=new SinglyLinkedListNode(data);
    if(llist==NULL)
    {
        llist=p;
    }
    else
    {
        p->next=llist;
        llist=p;
    }
    return llist;


}


