#include <bits/stdc++.h>
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
bool isIdentical(Node *root1, Node *root2)
{
    if (!root1 && !root2)
        return true;
    if (!root1 || !root2)
        return false;
    return (root1->data == root2->data) &&
           isIdentical(root1->left, root2->left) &&
           isIdentical(root1->right, root2->right);
}
int main()
{
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    Node *root2 = new Node(2);
    root2->left = new Node(4);
    root2->right = new Node(5);
    cout << (isIdentical(root1, root2) ? "Both trees match" : "Trees do not match") <<
         endl;
    return 0;
}
