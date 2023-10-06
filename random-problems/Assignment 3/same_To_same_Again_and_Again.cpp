#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    bool flag = true;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!st.empty())
    {
        if (st.size() != q.size())
        {
            flag = false;
            break;
        }
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}