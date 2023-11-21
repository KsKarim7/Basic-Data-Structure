#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        map<int, int> mp;
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int m;
            cin >> m;
            mp[m]++;
        }
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
        int st;
        int s = 0;
        for (auto i : mp)
            // cout << i.first << " " << i.second << endl;
            if (i.second > s)
            {
                st = i.first;
                s = i.second;
            }
            else if (i.second == s)
            {
                if (i.first > st)
                {
                    st = i.first;
                    s = i.second;
                }
            }
        cout << st << " " << s << endl;
    }
    return 0;
}