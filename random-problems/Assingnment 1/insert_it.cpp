#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int x;
    cin >> x;
    int count = 0;
    for (int i = x; i < m + x; i++)
    {
        a[i] = b[count];
        count++;
    }
    int xC = 0;
    for (int i = x + m; i < m + n; i++)
    {
        a[i] = c[x + xC];
        xC++;
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}