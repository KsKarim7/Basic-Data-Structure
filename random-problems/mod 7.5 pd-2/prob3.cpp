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
void insert_tail(Node *&head, Node *&tail, int v)
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

void print_mid_node(Node *head, int len)
{
    if (len % 2 == 0)
    {
        int mid1 = len / 2;
    }
    else
    {
        int mid1 = len / 2;
        int mid2 = mid1 + 1;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        counter += 1;
        if (len % 2 == 0)
        {
            int mid1 = len / 2;
            int mid2 = mid1 + 1;
            if (counter == mid1 || counter == mid2)
            {
                cout << temp->val << " ";
            }
        }
        else
        {
            int mid1 = (len / 2) + 1;
            if (counter == mid1)
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
        insert_tail(head, tail, val);
    }
    print_mid_node(head, len);
    return 0;
}