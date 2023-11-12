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


void print_maxMin(Node *head)
{
    Node *temp = head;
    int min = INT_MAX;
    int max = INT_MIN;
    while (temp != NULL)
    {
        if (temp->val < min)
        {
            min = temp->val;
        }
        if (temp->val > max)
        {
            max = temp->val;
        }
        temp = temp->next;
    }
    cout << max << " " << min << endl;
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
        ins_tail(head, tail, val);
    }
    print_maxMin(head);
    // print_linked_list(head);

    return 0;
}