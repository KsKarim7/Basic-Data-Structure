#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = n / 2;
    int q = 0;
    int r = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (j == t && i == t)
                {
                    cout << "X";
                    q++;
                    r--;
                }
                else
                {
                    cout << "\\";
                }
            }
            else if (i == q && j == r)
            {
                cout << "/";
                q++;
                r--;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}