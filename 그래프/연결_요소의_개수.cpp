#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> g[1003];
bool visited[1003];
queue<int> q;
int ans = 0;

int main() {
    cin>>N>>M;
    while(M--) {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=1; i<=N; i++) {
        if(visited[i]) continue;
        q.push(i);
        visited[i] = true;

        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            for(auto nxt : g[cur]) {
                if(visited[nxt]) continue;
                visited[nxt] = true;
                q.push(nxt);
                
            }
        }
        ans++;


    }
    cout<<ans;
}