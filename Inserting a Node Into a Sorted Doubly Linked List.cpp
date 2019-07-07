
#include<vector>
#include<algorithm>
// Complete the sortedInsert function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
  DoublyLinkedList d;
     vector<int> a;
  for (DoublyLinkedListNode *p = head; p != NULL; p = p->next) {
    a.push_back(p->data);
    }
    a.push_back(data);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        d.insert_node(a[i]);
    }
    return d.head;
}


