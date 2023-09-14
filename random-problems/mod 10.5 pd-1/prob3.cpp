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

void insert_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void check_palindrome(Node *head, Node *tail, bool &flag)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
        {
            flag = false;
            break;
        }
        else
        {
            i = i->next;
            j = j->prev;
        }
    }
    if (i->val != j->val)
    {
        flag = false;
    }
}
// void print_list(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    bool flag = true;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_list(head, tail, val);
    }
    // print_list(head);
    check_palindrome(head, tail, flag);
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}