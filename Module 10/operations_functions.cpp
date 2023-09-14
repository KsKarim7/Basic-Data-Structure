#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique(); //for this numbers much be sorted cause this function works side by side

    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}