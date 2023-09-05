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

void insert_list(Node *&head, int v)
{
    Node *newNode = new Node(v);
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
    cout << endl;
    cout << "Your linked list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void check_duplicate(Node *head, int len)
{
    Node *temp = head;
    Node *tempp = head;
    int count = 0;
    // for (int i = 0; i < len; i++)
    // {
    //     int var = temp->val;
    //     for (i = 1; i < len; i++)
    //     {
    //         if (var == tempp->val)
    //         {
    //             count++;
    //         }
    //         tempp = tempp->next;
    //     }
    //     temp = temp->next;
    // }
    while (temp != NULL)
    {
        int var = temp->val;
        for (int i = 0; i <= len; i++)
        {
            if (var == tempp->val)
            {
                count++;
            }
            tempp = tempp->next;
        }
        if (count > 1)
        {
            break;
        }
        temp = temp->next;
        count = 0;
    }
    if (count > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    Node *head = NULL;
    int len = 0;
    int count = 0;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        len++;
        insert_list(head, v);
    }
    // print_linked_list(head);
    // cout << len << endl;
    check_duplicate(head, len);

    return 0;
}