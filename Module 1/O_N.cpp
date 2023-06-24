#include <bits/stdc++.h>
using namespace std;
int main()
{
    // time complexity mainly depends on the loops
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++) // O(N)
    {
        s += a[i];
    }
    cout << s << endl;
    // mathematically time complexity operation rule: if the input is 1 : O(2n) -> O(n) {cause 2 multiplication doesn't matter and others are constants}
    return 0;
}