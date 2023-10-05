#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int cnt=0;
    while(n--) {
        string s; cin>>s;
        stack<char> st;
        for(auto c : s) {
            if(st.empty()) {
                st.push(c);
            }else {
                if(st.top() == c) st.pop();
                else st.push(c);
            }
        }
        if(st.empty()) cnt++; 
    }
    cout<<cnt;
}