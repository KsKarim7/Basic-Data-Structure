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

void insert_at_tail(Node *&head, int v, int *count)
{
    Node *newNode = new Node(v);
    *count += 1;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head)
{
    cout << "Your linked list: ";
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
    int count = 0;
    while (true)
    {
        cout << endl
             << "Insert a tail! " << endl;
        int v;
        cin >> v;
        if (v == -1)
            break;

        insert_at_tail(head, v, &count);
        print_linked_list(head);
        cout << count << " " << endl;
    }
    return 0;
}