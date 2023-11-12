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

void reverse_level_order_mirror(Node *root)
{
    vector<int> v;
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        v.push_back(f->val);
        if (f->right)
        {
            q.push(f->right);
        }
        if (f->left)
        {
            q.push(f->left);
        }
    }
    reverse(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    Node *root = input_tree();
    reverse_level_order_mirror(root);
}