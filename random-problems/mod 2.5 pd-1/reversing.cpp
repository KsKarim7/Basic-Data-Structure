#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    int count = n - 1;
    for (int i = 0; i < n; i++)
    {
        cout << v[count] << " ";
        count--;
    }
    return 0;
}