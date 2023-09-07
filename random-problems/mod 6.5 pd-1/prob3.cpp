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

void insert_list(Node *&head, int val)
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

void who_is_in_the_middle(Node *head, int len)
{
    // if(len % 2 == 2){

    // }
    Node *temp = head;
    for (int i = 1; i <= len; i++)
    {
        if (len % 2 == 0)
        {
            if (i == len / 2)
            {
                cout << temp->val << " " << temp->next->val << " " << endl;
            }
        }
        else
        {
            if (i == len / 2)
            {
                cout << temp->next->val << endl;
            }
        }
        temp = temp->next;
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
        insert_list(head, val);
    }
    who_is_in_the_middle(head, len);
    return 0;
}