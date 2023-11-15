#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        int inp;
        cin >> inp;
        int arr[inp];
        for (int i = 0; i < inp; i++)
        {
            int n;
            cin >> n;
            arr[i] = n;
        }
        sort(arr, arr + inp, greater<int>());
        int temp[inp];
        int j = 0;
        for (int i = 0; i < inp - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                temp[j++] = arr[i];
            }
        }
        temp[j++] = arr[inp - 1];
        for (int i = 0; i < j; i++)
        {
            arr[i] = temp[i];
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}