#include <bits/stdc++.h>
using namespace std;

int N,M,V;
vector<int> g[1003];
bool visited[1003];


void DFS(int cur) {
    visited[cur] = true;
    cout<<cur<<" ";
    for(auto nxt : g[cur]){
        if(visited[nxt]) continue;
        DFS(nxt);
    }
}

void BFS() {
    queue<int> q;
    q.push(V);
    visited[V] = true;

    while(!q.empty()) {
        int cur = q.front();
        cout<<cur<<" ";
        q.pop();

        for(auto nxt : g[cur]) {
            if(visited[nxt]) continue;
            q.push(nxt);
            visited[nxt] = true;
        }
    }

}

int main() {
    cin>>N>>M>>V;
    while(M--) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i = 1; i <= N; i++)
        sort(g[i].begin(), g[i].end());
    DFS(V);
    cout<<'\n';
    fill(visited+1, visited+N+1,false);
    BFS();

}