#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    while(N--) {
        string str; cin>>str;
        stack<char> st;
    
        for(auto c : str) {
            if(c == '(') st.push(c);
            else {
                if(st.empty() || st.top() == ')') {
                    st.push(c);
                    break;
                }else st.pop();
            }
        }
        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }
}