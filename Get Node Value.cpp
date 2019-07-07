
#include<vector>
// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
SinglyLinkedListNode* p;
vector<int> a;
for(p=head;p!=NULL;p=p->next)
{
    a.push_back(p->data);
}
int k=0,l;
for(auto i=a.rbegin();i!=a.rend();i++)
{
    if(k==positionFromTail)
    {
        l=*i;
        break;
    }
    k++;

}
return l;
}


