#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        left = nullptr;
        right = nullptr;
    }
};
class Tree
{
public:
    Node*root;
    Tree()
    {
        root=nullptr;
    }
    void add(int val)
    {
        Node* n = new Node(val);
        if(root==nullptr)
        {
            root = n;
            return;
        }
        queue<Node*>q;

        q.push(root);

        while(q.empty()==false)
        {
            Node * c = q.front();

            q.pop();
            if(c->left==nullptr)
            {
                c->left= n;
                return;
            }
            else
            {
                q.push(c->left);
            }
            if(c->right==nullptr)
            {
                c->right= n;
                return;
            }
            else
            {
                q.push(c->right);
            }
        }
    }
    void preorder(Node *n)
    {
        if(n==nullptr)
        {
            return;
        }
        cout<<n->data<<" ";
        preorder(n->left);
        preorder(n->right);
        return;
    }
    void Inorder(Node *n)
    {
        if(n==nullptr)
        {
            return;
        }
        Inorder(n->left);
        cout<<n->data<<" ";
        Inorder(n->right);
        return;
    }
    void postorder(Node *n)
    {

        if(n==nullptr)
        {
            return;
        }
        postorder(n->left);
        postorder(n->right);
        cout<<n->data<<" ";
        return;
    }
};
int main()
{
    Tree t;
    t.add(1);
    t.add(2);
    t.add(3);
    t.add(4);
    t.add(5);
    /* ----------------- Pre-order Traversal ----------------- */
    cout<<"Preorder Traversal: ";
    t.preorder(t.root);
    /* ----------------- In-order Traversal ----------------- */
    cout<<"\nInorder Traversal: ";
    t.Inorder(t.root);
    /* ----------------- Post-order Traversal ----------------- */
    cout<<"\nPostorder Traversal: ";
    t.postorder(t.root);
    return 0;
}
