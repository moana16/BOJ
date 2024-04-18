#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    string exp; cin>>exp;
    string ans = "";

    stack<char> st;
    map<char, int> m;
    m['+'] = 1;
    m['-'] = 1;
    m['*'] = 2;
    m['/'] = 2;

    for(auto c : exp) {
        if(isalpha(c)) ans += c;
        else {
            if(c == '(') st.push(c);
            else if(c == ')') {
                while(!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else {
                while(!st.empty() && st.top() != '(' && m[st.top()] >= m[c]) {
                    ans += st.top();
                    st.pop();
                }
                st.push(c);

            }
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout<<ans;

}