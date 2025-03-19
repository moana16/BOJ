#include<bits/stdc++.h>
using namespace std;

int main() {
    string str; cin>>str;
    stack<char> st;

    for(auto c : str) {
        if(c == '*') {
            cout<<st.size();
            return 0;
        }else if(c == '(') {
            st.push(c);
        }else {
            st.pop();
        }
    }
}