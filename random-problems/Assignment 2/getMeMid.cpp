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

void insert_linked_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void get_to_mid(Node *head, int len)
{
    Node *temp = head;
    for (int i = 1; i <= len; i++)
    {
        if (len % 2 == 0)
        {
            if (i == len / 2)
            {
                cout << temp->val << " " << temp->next->val << " " << endl;
            }
        }
        else
        {
            if (i == len / 2)
            {
                cout << temp->next->val << endl;
            }
            else if (len == 1)
            {
                cout << temp->val << endl;
            }
        }
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val, len = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        len++;
        insert_linked_list(head, tail, val);
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    get_to_mid(head, len);

    return 0;
}