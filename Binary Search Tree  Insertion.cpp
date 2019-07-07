

/* you only have to complete the function given below.
Node is defined as

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/



    Node * insert(Node * root, int data) {
        Node *p,*t,*c;
        t=new Node(data);
        if(root==NULL)
        {
            root=t;
        }
        else{
            p=NULL;
            c=root;
            while(c!=NULL)
        {
            p=c;
            if(data<c->data)
            {
                c=c->left;
            }
            else
            {
                c=c->right;
            }
        }
        if(data<p->data)
        {
            p->left=t;
        }
        else
        {
            p->right=t;
        }

        }

        return root;
    }


