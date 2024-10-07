#include<bits/stdc++.h>
using namespace std;
int N,M, mx = 0;
vector<vector<int>> v;
vector<int> ans;
vector<bool> visited;

int DFS(int cur) {
    visited[cur] = true;
    int cnt = 1;

    for(auto nxt : v[cur]) {
        if(!visited[nxt])
        cnt += DFS(nxt);
    }
    return cnt;
}

int main(){
    cin>>N>>M;
    v.resize(N+1);

    for(int i=0; i<M; i++) {
        int a,b; cin>>a>>b;
        v[b].push_back(a);
    }
    for(int i=1; i<=N; i++) {
        visited.assign(N+1, false);

        int cnt = DFS(i);

        if(cnt == mx) ans.push_back(i);
        else if(cnt > mx) {
            ans.clear();
            ans.push_back(i);
            mx = cnt;
        }
    }

    sort(ans.begin(), ans.end());

    for(auto c : ans) cout<<c<<" ";
}