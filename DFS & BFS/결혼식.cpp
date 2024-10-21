#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int dist[505];
int ans = 0;

int main() {
    int n,m; cin>>n>>m; 
    v.resize(n+1); 

    for(int i=0; i<m; i++) {
        int a,b; cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(dist, -1, sizeof(dist));
    
    queue<int> q;
    q.push(1);
    dist[1] = 0;

    while(!q.empty()) {
        int x = q.front(); q.pop();
        
        for(auto nxt : v[x]) {
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[x]+1;
            q.push(nxt);
        }
    }

    for(int i=2; i<=n; i++) {
        if(dist[i] == 1 || dist[i] == 2) ans++;
    }
    cout<<ans;

}
