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
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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

void check_list(Node *head, Node *headd, bool &flag)
{
    if (size(head) > size(headd) || size(head) < size(headd))
    {
        flag = false;
    }
    else
    {
        Node *temp = head;
        Node *tempp = headd;
        while (temp != NULL)
        {
            if (temp->val != tempp->val)
            {
                flag = false;
                break;
            }
            else
            {
                temp = temp->next;
                tempp = tempp->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *headd = NULL;
    Node *taill = NULL;
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
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_list(headd, taill, val);
    }
    print_list(head);
    print_list(headd);

    check_list(head, headd, flag);
    if (flag == false)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;

    return 0;
}