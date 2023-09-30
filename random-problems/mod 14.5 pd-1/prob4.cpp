





#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int>q;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){
        // cout<<st.top()<<" ";
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
   
    return 0;
}
    
