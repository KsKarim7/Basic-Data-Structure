#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *nLeft, *nRight;
        if (l == -1)
        {
            nLeft = NULL;
        }
        else
        {
            nLeft = new Node(l);
        }
        if (r == -1)
        {
            nRight = NULL;
        }
        else
        {
            nRight = new Node(r);
        }

        parent->left = nLeft;
        parent->right = nRight;

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    return root;
};

bool search(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == x)
    {
        return true;
    }
    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    if (search(root, 11))
    {
        cout << "Yes, Found" << endl;
    }
    else
    {
        cout << "No, Not Found" << endl;
    }
    return 0;
}