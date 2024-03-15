#include<bits/stdc++.h>
using namespace std;

int V,E,K;
vector<pair<int,int>> adj[20002];
constexpr int INF = 0x3f3f3f3f;
int d[20002]; // 최단 거리 테이블


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>V>>E;
    cin>>K;

    fill(d, d+V+1, INF);
    
    int u,v,w;
    while(E--) {
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
    }

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; //최소 힙
    d[K] = 0;
    pq.push({d[K], K});

    while(!pq.empty()) {
        auto cur = pq.top(); pq.pop();

        if(d[cur.second] != cur.first) continue;
        for(auto nxt : adj[cur.second]) {
            if(d[nxt.second] <= d[cur.second] + nxt.first) continue;
            d[nxt.second] = d[cur.second] + nxt.first;
            pq.push({d[nxt.second], nxt.second});
        }
    }
    for(int i=1; i<=V; i++) {
        if(d[i] == INF) cout<<"INF\n";
        else cout<<d[i]<<"\n";
    }

}