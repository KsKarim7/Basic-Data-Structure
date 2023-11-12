#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *head, Node *tail, int len)
{
    Node *temp = head;
    Node *temp2 = tail;
    if (len == 1)
    {
        cout << temp->val << " ";
        cout << temp2->val << " ";
    }
    else
    {
        cout << temp->val << " ";
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        cout << temp->val << " ";
    }
    cout << endl;
}

void insert_at_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        for (int i = 1; i <= pos; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        // cout << temp->val << "  #";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q, len = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0 && len == 0)
        {
            insert_list(head, tail, v);
            len++;
        }
        else if (x == 1)
        {
            insert_list(head, tail, v);
            len++;
        }
        else
        {
            insert_at_position(head, x, v);
            len++;
        }
        print_list(head, tail, len);
    }
    return 0;
}