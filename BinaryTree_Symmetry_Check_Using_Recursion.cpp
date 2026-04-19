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
bool isMirror(Node* ptr, Node* ptr1)
{
    if (ptr == nullptr && ptr1 == nullptr)
        return true;
    if (ptr == nullptr || ptr1 == nullptr)
        return false;
    return (ptr->data == ptr1->data)&& isMirror(ptr->left, ptr1->right) &&
           isMirror(ptr->right, ptr1->left);
}
bool isSymmetric(Node * root)
{
    if (root == nullptr)
    {
        return true;
    }
    return isMirror(root->left, root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->right->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(4);
    cout << (isSymmetric(root) ? "Binary Tree is symmetric" : "Binary Tree is not symmetric") << endl;
}
