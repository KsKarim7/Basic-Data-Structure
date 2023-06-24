#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = false;
    while (l <= r)
    {
        int midIdx = (l + r) / 2;
        if (a[midIdx] == x)
        {
            flag = true;
            break;
        }
        if (x > a[midIdx])
        {
            // go right
            l = midIdx + 1;
        }
        else
        {
            // go left
            r = midIdx - 1;
        }
    }
    if (flag == true)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}