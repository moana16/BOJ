#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin>>s;
    stack<char> st;
    long ans=0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '(') st.push(s[i]);
        else {
            if(s[i-1]=='(') { //레이저일때
                st.pop();
                ans += st.size(); 
            
            }
            else  { //막대일때
                
                st.pop();
                ans++;
            }
        }
    }
    cout<<ans;
}