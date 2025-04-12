#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    stack<int> st;

    for(auto c : str) {
        if(isdigit(c)) {
            st.push(c-'0');
        }
        else {
            int n = st.top(); st.pop();
            int m = st.top(); st.pop();
            if(c == '+') st.push(n+m);
            else if(c == '-') st.push(m-n);
            else if(c == '*') st.push(n*m);
            else if(c == '/') st.push(m/n);
        } 
    }
    cout<<st.top();
}