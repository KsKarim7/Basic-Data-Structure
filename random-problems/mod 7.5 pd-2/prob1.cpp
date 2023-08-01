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

void ins_tail(Node *&head, Node *&tail, int val)
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

int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    Node *tail = NULL;
    Node *tail2 = NULL;
    int val, hd1 = 0, hd2 = 0;
    bool flag = false;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            flag = true;
            break;
        }
        if (flag == false)
        {
            ins_tail(head, tail, val);
            hd1 += 1;
        }
        // if (flag == true)
        // {
        //     ins_tail(head2, tail2, val);
        //     hd2 += 1;
        // }
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            flag = true;
            break;
        }
        // if (flag == false)
        // {
        //     ins_tail(head, tail, val);
        //     hd1 += 1;
        // }
        if (flag == true)
        {
            ins_tail(head2, tail2, val);
            hd2 += 1;
        }
    }

    if (hd1 == hd2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
