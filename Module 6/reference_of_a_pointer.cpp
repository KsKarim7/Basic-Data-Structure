#include <bits/stdc++.h>
using namespace std;

void func(int *&p)
{
    p = NULL;
}

int main()
{
    int val = 10;
    int *pointer = &val;
    func(pointer);
    cout << val << endl;
    return 0;
}