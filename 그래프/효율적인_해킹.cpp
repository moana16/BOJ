#include<bits/stdc++.h>
using namespace std;

vector<int> v[100002];
bool visited[100002];
int cnt = 0;
int MX = 0;

void DFS(int node) {
    cnt++;
    visited[node] = true;
    
    for(int i=0; i<v[node].size(); i++) {
        int nxt = v[node][i];
        if(!visited[nxt]) DFS(nxt);
    }
}
int main() {
    int N,M; cin>>N>>M;
    while(M--) {
        int a,b;
        cin>>a>>b;
        v[b].push_back(a);
    }

    vector<pair<int,int>> hackCount;
    for(int i=1; i<=N; i++) {
        cnt = 0;
        memset(visited,false,sizeof(visited));
        DFS(i);
        hackCount.push_back({i,cnt});
        MX = max(cnt, MX);
    }
    sort(hackCount.begin(), hackCount.end());
    for(auto c : hackCount) {
        if(c.second == MX) cout<<c.first<<" ";
    }
    
    
}