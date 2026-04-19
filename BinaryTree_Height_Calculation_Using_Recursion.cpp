#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int value)
    {
        data = value;
        right = nullptr;
        left = nullptr;
    }
};
class Tree
{
public:
    Node *root;

    Tree()
    {
        root = nullptr;
    }
    void add(int val)
    {
        Node *ptr = new Node(val);

        if(root==nullptr)
        {
            root = ptr;
            return;
        }
        queue <Node*> q;
        q.push(root);
        while(q.empty()==false)
        {
            Node * ptr1 = q.front();
            q.pop();

            if(ptr1->left==nullptr)
            {
                ptr1->left = ptr;
                return;
            }
            else
            {
                q.push(ptr1->left);
            }
            if(ptr1->right==nullptr)
            {
                ptr1->right = ptr;
                return;
            }
            else
            {
                q.push(ptr1->right);
            }
        }
    }
    int Find_height(Node *ptr2)
    {
        if(ptr2==nullptr)
        {
            return 0;
        }
        int leftHeight = Find_height(ptr2->left);
        int rightHeight = Find_height(ptr2->right);

        return 1 + max(leftHeight, rightHeight);
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
    cout << "Height of tree: " << t.Find_height(t.root) << endl;
    return 0;
}
