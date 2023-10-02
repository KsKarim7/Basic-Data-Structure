#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    stack<int> stt;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        // cout<<st.top()<<" ";
        stt.push(st.top());
        st.pop();
    }
    while (!stt.empty())
    {
        cout << stt.top() << " ";
        stt.pop();
    }

    return 0;
}