#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // O(N)   *So the total complexity is O(Nlog(N))
    {
        int x = i;
        while (x > 0) // O(log(N))
        {
            int digit = x % 10;
            cout << digit << " ";
            x /= 10;
        }
        cout << endl;
    }
    return 0;
    return 0;
}