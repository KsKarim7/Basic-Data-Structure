#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int x : v)
    {
        if (x > 0)
        {
            ans.push_back(1);
        }
        else if (x < 0)

        {
            ans.push_back(2);
        }
        else
        {
            ans.push_back(0);
        }
    }
    for (int z : ans)
    {
        cout << z << " ";
    }
    return 0;
}