
/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
int test(Node* root)
{
  if (root != NULL) {
    int l, r;
    l = test(root->left);
    r = test(root->right);
    if (l > r)
      return l + 1;
    else
      return r + 1;

  } else
    return 0;
}
    int height(Node* root) {
        return test(root)-1;
    }


