#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
class TreeBuilder
{
    unordered_map<int, int> inorderIndexMap;
    int preIndex;
    Node* buildTreeHelper(const vector<int> &preorder, const vector<int> &inorder, int
                          inStart, int inEnd)
    {
        if (inStart > inEnd)
            return nullptr;
        int rootVal = preorder[preIndex++];
        Node* root = new Node(rootVal);
        int inIndex = inorderIndexMap[rootVal];
        root->left = buildTreeHelper(preorder, inorder, inStart, inIndex - 1);
        root->right = buildTreeHelper(preorder, inorder, inIndex + 1, inEnd);
        return root;
    }
public:
    Node* buildTree(const vector<int> &preorder, const vector<int> &inorder)
    {
        preIndex = 0;
        inorderIndexMap.clear();
        for (int i = 0; i < (int)inorder.size(); i++)
        {
            inorderIndexMap[inorder[i]] = i;
        }
        return buildTreeHelper(preorder, inorder, 0, (int)inorder.size() - 1);
    }
    void inorderTraversal(Node* root)
    {
        if (!root) return;
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
};
int main()
{
    vector<int> preorder = {5, 8, 20, 10, 9};
    vector<int> inorder = {8, 5, 10, 20, 9};
    TreeBuilder builder;
    Node* root = builder.buildTree(preorder, inorder);
    cout << "Reconstructed tree In-order sequence: ";
    builder.inorderTraversal(root);
    cout << endl;
    return 0;
}
