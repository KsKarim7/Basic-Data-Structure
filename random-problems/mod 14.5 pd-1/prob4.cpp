#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> vec;
    void push(int val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        vec.pop_back();
    }
    int top()
    {
        return vec.back();
    }
    int size()
    {
        return vec.size();
    }
    bool empty()
    {
        if (vec.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st, stt;
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        stt.push(z);
    }
    while (!st.empty())
    {
        if (st.size() != stt.size())
        {
            flag = false;
            break;
        }
        else if (st.top() != stt.top())
        {
            flag = false;
            break;
        }
        st.pop();
        stt.pop();
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}