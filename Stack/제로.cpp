#include<bits/stdc++.h>
using namespace std;

int main() {
    int K; cin>>K;
    stack<int> st;
    while(K--) {
        int x; cin>>x;
        if(x == 0) st.pop();
        else st.push(x);
    }
    int ans = 0;
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    cout<<ans;
}