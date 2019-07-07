

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
 for(SinglyLinkedListNode* ptr=head;ptr!=nullptr;ptr=ptr->next)
 {
     cout<<ptr->data<<endl;
 }


}


