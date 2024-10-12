#include<bits/stdc++.h>
using namespace std;

vector<vector<pair<int,int>>> v;
long long ans = 0;
bool visited[10002];

void DFS(int cur, long long distance) {
    for(auto nxt : v[cur]) {
        if(visited[nxt.first]) continue;
        visited[nxt.first] = true;
        DFS(nxt.first, distance+nxt.second);
        visited[nxt.first] = false;

    }
    ans = max(ans, distance);
    return;
}

int main() {
    int n; cin>>n;
    v.resize(n+1);
    for(int i=0; i<n-1; i++) {
        int a,b,c; cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }

    memset(visited, false, sizeof(visited));
    
    for(int i=1; i<=n; i++) {
        visited[i] = true;
        DFS(i,0);
        visited[i] = false;

    }

    cout<<ans;
}