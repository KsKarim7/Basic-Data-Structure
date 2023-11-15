#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"khalz", 17});
    // mp.insert({"fk", 77});
    // mp.insert({"mk", 27});
    // mp.insert({"ks", 0});

    mp["Khalz"] = 17; // O(logN)

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;  //0(logN)
    // }

    cout << mp["ks"] << endl;
    // if it returns 0 that means this key is not present in this map,but the org value can also be 0 so:
    if (mp.count("ks"))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }
    return 0;
}