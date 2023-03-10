#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int ans=0;
    while(n--) {
        string s; cin>>s;
        stack<char> st;
        for(auto c : s) {
            if(st.empty() || st.top() != c) {
                st.push(c);
            }
            else if(st.top() == c) {
                st.pop();
            }
        }
        if(st.empty()) ans++;
    }
    cout<<ans;
}