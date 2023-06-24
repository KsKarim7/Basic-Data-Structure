// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     vector<int> v2;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v2.push_back(x);
//     }
//     vector<int> ans(v2);
//     ans.insert(ans.begin() + 2, v.begin(), v.end());
//     for (int x : ans)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    vector<int> ans(v2);
    ans.insert(ans.begin() + n, v.begin(), v.end());
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}