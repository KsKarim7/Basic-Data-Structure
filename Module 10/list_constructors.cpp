#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList;
    // list<int> myList(10);
    // list<int> list2 = {1, 2, 3, 4, 5};
    int a[5] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300}; // with vector
    // cout << myList.front();
    // list<int> myList(list2);

    // list<int> myList(a, a + n);

    list<int> myList(v.begin(), v.end());

    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;  //you will get value with pointer here
    // }

    for (int val : myList) // shortcut
    {
        cout << val << endl;
    }
    return 0;
}