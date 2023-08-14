// Children Sum Property

// Sum of child nodes is equal to parent node's value

#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int key;
    Node *left;
    Node *right;

    Node(int k)
    {
        key = k;
        left = NULL;
        right = NULL;
    }
};

bool isSum(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    int sum = 0;

    if (root->left != NULL)
    {
        sum += root->left->key;
    }

    if (root->right != NULL)
    {
        sum += root->right->key;
    }

    bool ans;

    if (root->key == sum && isSum(root->left) && isSum(root->right))
    {
        ans = true;
    }
    else
    {
        ans = false;
    }

    return ans;
}

int main()
{
    Node *root = new Node(20);
    root->left = new Node(12);
    root->right = new Node(7);

    cout << isSum(root);

    return 0;
}