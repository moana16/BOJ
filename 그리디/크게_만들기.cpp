#include<bits/stdc++.h>
using namespace std;

int N,K;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>K;
    string num; cin>>num;

    stack<char> st;
    int cnt = 0;
    for(int i=0; i<N; i++) {
        while(!st.empty() && cnt < K && st.top() < num[i]) {
            st.pop();
            cnt++;
        }
        st.push(num[i]);
    }
    while(cnt < K) {
        cnt++;
        st.pop();
    }
    stack<char> ans;
    while(!st.empty()) {
        ans.push(st.top());
        st.pop();
    }
    while(!ans.empty()) {
        cout<<ans.top();
        ans.pop();
    }
}
