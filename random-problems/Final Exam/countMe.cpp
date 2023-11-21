#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string sentence;
        getline(cin, sentence);
        string w;
        stringstream ss(sentence);
        map<string, int> mp;
        int counter = INT_MIN;
        string st;
        // int s = 0;
        while (ss >> w)
        {
            mp[w]++;
            if (mp[w] > counter)
            {
                st = w;
                counter = mp[w];
            }
        }
        cout << st << " " << counter << endl;
    }
    return 0;
}