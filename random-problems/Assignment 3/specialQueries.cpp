#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
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
            cout << "Invalid" << endl;
        }
        else
        {
            // cout << 's';
            cout << q.front() << endl;
            q.pop();
        }
    }
    // q.push(n);
    // q.push("memo");
    // cout << q.front() << " ";
    return 0;
}