#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // int l = 0;
        // int r = n - 1;
        bool flag = false;
        // while (l <= r)
        // {
        //     int midIdx = (l + r) / 2;
        //     if (arr[l] > arr[midIdx])
        //     {
        //         l = midIdx + 1;
        //     }
        //     else
        //     {
        //         r = midIdx - 1
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     int midIdx = (l + r) / 2;
        //     if (arr[l] < arr[midIdx])
        //     {
        //         l = midIdx + 1;
        //     }
        //     else
        //     {
        //         flag = true;
        //         break;
        //     }
        // }

        // while (n--)
        // {
        //     if (arr[l] > arr[r])
        //     {
        //         flag = true;
        //         break;
        //     }
        //     else
        //     {
        //         l++;
        //         r--;
        //     }
        // }
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            // if (pre[i] < arr[i - 1])
            // {
            //     flag = true;
            //     break;
            // }
            if (arr[i] < arr[count])
            {
                flag = true;
                // cout << arr[i] << " " << arr[count];
                break;
            }
            else
            {
                count++;
            }
        }
        if (flag == false)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}