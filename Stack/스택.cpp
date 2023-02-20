#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin>>n; 
    stack<int> st;
    for(int i=0; i<n; i++) {
        string s; cin>>s;
        if(s.compare("push")==0) {
            int m; cin>>m;
            st.push(m);
        }
        else if(s.compare("top")==0) {
            if(st.empty()) cout<<-1<<"\n";
            else cout<<st.top()<<"\n";
        }
        else if(s.compare("size")==0) cout<<st.size()<<"\n";
        else if(s.compare("empty")==0) {
            if(st.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
        else if(s.compare("pop")==0) {
            if(st.empty()) cout<<-1<<"\n";
            else  {
                cout<<st.top()<<"\n";
                st.pop();
                }
        }
    }
}