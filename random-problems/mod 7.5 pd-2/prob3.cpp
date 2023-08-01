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

void print_mid_node(Node *head, int count)
{
    if (count % 2 == 0)
    {
        int mid1 = count / 2;
    }
    else
    {
        int mid1 = count / 2;
        int mid2 = mid1 + 1;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        counter += 1;
        // if()
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val, count = 0;
    while (true)
    {
        cin >> val;
        count += 1;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_mid_node(head, count);
    return 0;
}