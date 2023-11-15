#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    // while (2)
    // {
    //     string sentence;
    //     getline(cin, sentence);
    //     string w;
    //     stringstream ss(sentence);
    //     map<string, int> mp;
    //     while (ss >> w)
    //     {
    //         // mp[w]++;
    //         cout << w << endl;
    //     }
    //     // for (auto it = mp.begin(); it != mp.end(); it++)
    //     // {
    //     //     cout << it->first << " " << it->second << endl;
    //     // }
    // }
    for (int i = 0; i < n; i++)
    {
        string sentence;
        getline(cin, sentence);
        string w;
        stringstream ss(sentence);
        map<string, int> mp;
        while (ss >> w)
        {
            // mp[w]++;
            cout << w << endl;
        }
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     cout << it->first << " " << it->second << endl;
        // }
        cout << "Line 41" << endl;
    }
    return 0;
}