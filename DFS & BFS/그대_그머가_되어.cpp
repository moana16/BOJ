#include<bits/stdc++.h>
using namespace std;

int a,b, ans = INT_MAX;
vector<vector<int>> v;
int dist[1002];

int main() {
    cin>>a>>b;
    int N,M; cin>>N>>M;
    v.resize(N+1);
    for(int i=0; i<M; i++) {
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    memset(dist, -1, sizeof(dist));

    queue<int> q;
    q.push(a);
    dist[a] = 0;

    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(auto nxt : v[x]) {
            if(dist[nxt] != -1) continue;
            dist[nxt] = dist[x] + 1;
            q.push(nxt);
        }
    }

    
    cout<<dist[b];
}