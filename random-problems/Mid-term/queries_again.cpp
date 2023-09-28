#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // cout << temp->val << " " << newNode->next->prev << endl;
    newNode->next = temp->next;
    temp->next = newNode;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    newNode->prev = temp;
}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_straight(Node *head)
{
    Node *temp = head;
    if (temp != NULL)
    {
        cout << "L ->"
             << " ";
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    if (temp != NULL)
    {
        cout << "R ->"
             << " ";
    }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int inp;
    int val, idx, count = 0;
    cin >> inp;
    for (int i = 0; i < inp; i++)
    {
        cin >> idx >> val;
        // cout << size(head) << " ";
        if (idx == 0)
        {
            insert_head(head, tail, val);
        }
        else if (idx > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (idx == size(head))
        {
            insert_tail(head, tail, val);
        }
        else
        {
            insert_at_position(head, idx, val);
        }
        if (idx <= size(head))
        {
            print_straight(head);
            print_reverse(tail);
        }
    }

    return 0;
}