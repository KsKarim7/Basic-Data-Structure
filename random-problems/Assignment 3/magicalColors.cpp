#include <bits/stdc++.h>
using namespace std;

void magician(int m)
{
    stack<char> st;
    stack<char> stt;
    for (int i = 0; i < m; i++)
    {
        char c;
        cin >> c;
        if (st.empty())
        {
            st.push(c);
        }
        else
        {
            if ((c == 'R' || c == 'B') && (st.top() == 'B' || st.top() == 'R'))
            {
                if ((c == 'R' && st.top() == 'R') || (c == 'B' && st.top() == 'B'))
                {
                    st.pop();
                }
                else
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('P');
                    }
                }
            }
            else if ((c == 'R' || c == 'G') && (st.top() == 'G' || st.top() == 'R'))
            {
                if ((c == 'R' && st.top() == 'R') || (c == 'G' && st.top() == 'G'))
                {
                    st.pop();
                }
                else
                {

                    st.pop();
                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('Y');
                    }
                }
            }
            else if ((c == 'B' || c == 'G') && (st.top() == 'G' || st.top() == 'B'))
            {
                if ((c == 'B' && st.top() == 'B') || (c == 'G' && st.top() == 'G'))
                {
                    st.pop();
                }
                else
                {

                    st.pop();
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push('C');
                    }
                }
            }
            else
            {
                st.push(c);
            }
        }
    }
    while (!st.empty())
    {
        // cout << st.top();
        stt.push(st.top());
        st.pop();
    }
    while (!stt.empty())
    {
        cout << stt.top();
        stt.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        magician(m);
    }
    return 0;
}