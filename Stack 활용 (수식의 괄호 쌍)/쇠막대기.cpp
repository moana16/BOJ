#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    stack<char> st;
    int ans = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') {
            st.push(str[i]);
        }
        else {
            if(!st.empty() && st.top() == '(') {
                st.pop();
                if(str[i-1] == '(') ans += st.size();
                else ans += 1;
            }
        }

    }
    cout<<ans;
}