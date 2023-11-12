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

void check_perfect(Node *root, int &n, int &leaves)
{
    // int n = 0;
    // int leaves = 0;
    if (root == NULL)
    {
        n += 1;
        return;
    }
    check_perfect(root->left, n, leaves);
    check_perfect(root->right, n, leaves);
    if (root->left == NULL && root->right == NULL)
    {
        leaves += 1;
    }
}

int main()
{
    Node *root = input_tree();
    int n = 0;
    int leaves = 0;
    check_perfect(root, n, leaves);
    // int res = n - leaves;

    if (n * 0.5 == leaves)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}