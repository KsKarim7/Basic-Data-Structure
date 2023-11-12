#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int counter = 0;
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (v[i] + 1 == v[j])
            {
                counter += 1;
                break;
            }
        }
        // if (res == false)
        // {
        //     counter += 1;
        // }
    }
    cout << counter;
    return 0;
}