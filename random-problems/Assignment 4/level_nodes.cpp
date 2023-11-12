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

void level_nodes(Node *root)
{
    int inp;
    bool flag = false;
    cin >> inp;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == inp)
        {
            flag = true;
            cout << node->val << " ";
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    if (flag == false)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = input_tree();
    level_nodes(root);
    return 0;
}