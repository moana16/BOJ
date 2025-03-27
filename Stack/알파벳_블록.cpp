#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    deque<char> dq;
    stack<pair<char,bool>> st;
    while(N--) {    
        int x; cin>>x;
        if(x == 1) {
            char c; cin>>c;
            dq.push_back(c);
            st.push({c, false});
        }
        else if(x == 2) {
            char c; cin>>c;
            dq.push_front(c);
            st.push({c,true});
        }
        else {
            if(st.empty()) continue;
            char c = st.top().first;
            bool isFront = st.top().second;
            st.pop();

            if(isFront) dq.pop_front();
            else  dq.pop_back();
            
        }
    }
    if(dq.empty()) cout<<0;
    else for(auto c : dq) cout<<c;
}