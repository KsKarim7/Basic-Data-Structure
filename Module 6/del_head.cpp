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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at tail! " << endl
             << endl;
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
    cout << endl;
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at position " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}

void delete_from_position(Node *&head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Delete position " << pos << endl
         << endl;
}
void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted position " << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Inset at head" << endl;
        cout << "Option 5: Delete from position" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate" << endl;
        int option;
        cin >> option;
        if (option == 1)
        {
            cout << "Please enter value:";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (option == 2)
        {
            print_linked_list(head);
        }
        else if (option == 3)
        {
            int pos, val;
            cout << "Enter position of your value: ";
            cin >> pos;
            cout << "Enter value of your position: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (option == 4)
        {
            int val;
            cout << "Enter value of your position: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (option == 5)
        {
            int pos;
            cout << "Enter position";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {

                delete_from_position(head, pos);
            }
        }
        else if (option == 6)
        {
            delete_head(head);
        }
        else if (option == 7)
        {
            break;
        }
        return 0;
    }
}