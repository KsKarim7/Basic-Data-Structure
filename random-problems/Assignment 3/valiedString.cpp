#include <bits/stdc++.h>
using namespace std;

void isValid(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (st.empty())
        {
            // continue;
            st.push(c);
        }
        else
        {
            if (c == 'A' && st.top() == 'B')
            {
                st.pop();
            }
            else if (c == 'B' && st.top() == 'A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        isValid(s);
    }
    return 0;
}