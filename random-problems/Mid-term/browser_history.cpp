#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val = "";
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string inp)
{
    Node *newNode = new Node(inp);
    if (tail = NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void find_address(Node *head, string inpp)
{
    Node *temp = head;
    bool flag = false;
    while (temp != NULL)
    {
        if (temp->val == inpp)
        {
            cout << temp->val << endl;
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if (flag == false)
    {
        cout << "Not Available" << endl;
    }
}

void print_list(Node *head)
{
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
    Node *tail = NULL;
    string inp;
    while (true)
    {
        cin >> inp;
        if (inp == "end")
        {
            break;
        }
        insert_tail(head, tail, inp);
    }
    print_list(head);
    // int val;
    // string inpp, address;
    // cin >> val;
    // for (int i = 0; i < val; i++)
    // {
    //     cin >> inpp;
    //     if (inpp == "visit")
    //     {
    //         cin >> address;
    //         find_address(head, address);
    //     }
    // }

    return 0;
}