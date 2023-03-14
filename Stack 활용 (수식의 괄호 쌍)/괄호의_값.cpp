#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string s; cin>>s;
    stack<char> st;
    int ans = 0;
    int num = 1;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(' ) {
            num *= 2;
            st.push(s[i]);
        }
        else if(s[i]=='[') {
            num *= 3;
            st.push(s[i]);
            
        }
        else if(s[i]==')') {
            if(st.empty() || st.top() != '(') {
                cout<<0;
                return 0;
            }
            else if(s[i-1] == '(') {
                ans += num;
            }
            num = num/2;
            st.pop();
        }
        else if(s[i]==']') {
            if(st.empty() || st.top() != '[') {
                cout<<0;
                return 0;
            }
            else if(s[i-1] == '[') {
                ans += num;
            }
            num = num/3;
            st.pop();
        }
    }
    if(!st.empty()) ans = 0;
    cout<<ans;
}