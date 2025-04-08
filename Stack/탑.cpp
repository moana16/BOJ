#include<bits/stdc++.h>
using namespace std;
constexpr int INF = 1e9;

int main(){
    int N; cin>>N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin>>v[i];

    stack<pair<int,int>> st;
    st.push({0,INF});

    for(int i=1; i<=N; i++) {
        while(!st.empty() && st.top().second <= v[i]) {
            st.pop();
        }
        cout<<st.top().first<<" ";
        st.push({i, v[i]});
    }
}   