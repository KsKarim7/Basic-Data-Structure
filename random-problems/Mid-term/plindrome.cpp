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

void insert_tail(Node *&head, Node *&tail, int val)
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

void reverse(Node *&head, Node *current)
{
    if (current->next == NULL)
    {
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insert_tail(newHead, newTail, temp->val);
        temp = temp->next;
    }
    reverse(newHead, newHead);

    bool flag = true;
    temp = head;
    Node *tempp = newHead;
    while (temp != NULL)
    {
        if (temp->val != tempp->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
        tempp = tempp->next;
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    // print_list(head);
    // print_list(newHead);
    return 0;
}