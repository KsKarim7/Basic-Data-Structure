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

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_position(Node *head, int len)
{
    while (true)
    {
        int pos, val;
        cin >> pos >> val;
        Node *newNode = new Node(val);
        Node *temp = head;
        if (pos > len - 1)
        {
            cout << "Invalid";
            break;
        }
        if (pos == 0)
        {
            insert_at_head(head, val);
        }
        else
        {
            for (int i = 1; i <= pos - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            cout << endl
                 << "Inserted at position " << pos << endl
                 << endl;
        }
        print_linked_list(head);
    }
}

int main()
{
    Node *head = NULL;
    int len = 0;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        len++;
        insert_tail(head, val);
    }
    print_linked_list(head);
    insert_position(head, len);

    return 0;
}