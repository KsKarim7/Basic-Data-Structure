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

int main()
{
    // dynanic!

    Node *head = new Node(10);
    Node *body = new Node(20);

    head->next = body;

    cout << head->val << endl;
    cout << body->val << endl;
    cout << head->next->val << endl;
    // cout << (*(*head).next).val << endl; long cut
    return 0;
}