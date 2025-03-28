#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    int cnt = 1;
    while(cin>>s){
        if(s[0] == '-') break;

        stack<char> st;
        int open=0, close=0;

        for(auto c : s) {
            if(c == '{') {
                st.push(c);
                open++;
            }
            else {
                if(!st.empty()) st.pop();
                else close++;
            }
        }
        open = st.size();

        int res = (open + 1) / 2 + (close + 1) / 2;
        cout<<cnt<<". "<<res<<'\n';
        cnt++;

    }
}