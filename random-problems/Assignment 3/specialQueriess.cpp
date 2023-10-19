#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<string> l;
    void push(string val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    // int front()
    // {
    //     return l.begin();
    // }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (q.empty())
        {
            cout << "Invalid";
        }
        else
        {
            // q.front();
            q.pop();
        }
    }
    // q.push(n);
    // q.push("memo");
    // cout << q.front() << " ";
    return 0;
}