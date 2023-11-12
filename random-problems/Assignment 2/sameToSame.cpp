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

void check(Node *head, Node *headd, bool &flag)
{
    Node *temp = head;
    Node *tempp = headd;
    while (temp != NULL || tempp != NULL)
    {
        if (tempp == NULL)
        {
            flag = true;
            break;
        }
        else if (temp->val != tempp->val)
        {
            flag = true;
            break;
        }
        temp = temp->next;
        tempp = tempp->next;
    }
}
void ins_list(Node *&head, Node *&tail, int val)
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

void print_list(Node *head)
{
    cout << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *headd = NULL;
    Node *tail = NULL;
    Node *taill = NULL;
    int val;
    // int count = 0;
    bool flag = false;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        ins_list(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        ins_list(headd, taill, val);
    }

    // cin >> val;

    check(head, headd, flag);
    if (flag == false)
    {
        cout << "YES";
    }
    else
    {

        cout << "NO";
    }
    return 0;
}
