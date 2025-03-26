#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    stack<pair<int,int>> st;
    int ans = 0;
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        if(x == 1) {
            int A,T; cin>>A>>T;
            st.push({A,T});
        }
        if(!st.empty()) {
            pair<int,int> top = st.top();
            st.pop();
            top.second--;

            if(top.second == 0) ans += top.first;
            else st.push(top); 
        }
        
    }

    cout<<ans;
}