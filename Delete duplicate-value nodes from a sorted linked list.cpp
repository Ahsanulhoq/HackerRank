
#include<set>

// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
SinglyLinkedListNode* p;
set<int> a;
SinglyLinkedList f;
for(p=head;p!=NULL;p=p->next)
{
    a.insert(p->data);
}
for(auto i=a.begin();i!=a.end();i++)
{
    f.insert_node(*i);
}
return f.head;

}


