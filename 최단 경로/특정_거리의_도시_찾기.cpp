#include<bits/stdc++.h>
using namespace std;

int N,M,K,X;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M>>K>>X;
    vector<vector<int>> g(N+1);
    while(M--) {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }

    vector<int> dist(N+1, -1); //거리 벡터

    int st = X;
    dist[st] = 0;

    queue<int> q;
    q.push(st);

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        for(int i=0; i<g[cur].size(); i++) {
            int nxt = g[cur][i];
            if(dist[nxt] == -1) {
                dist[nxt] = dist[cur]+1;
                q.push(nxt);
            }
        }
    }
    vector<int> ans;
    for(int j=1; j<=N; j++) {
        if(dist[j] == K) ans.push_back(j);
    }

    if(ans.empty()) cout<<-1;
    else {
        for(auto c : ans) cout<<c<<'\n';
    }
}