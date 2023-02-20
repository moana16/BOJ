#include <bits/stdc++.h>
using namespace std;

constexpr int N=1e3+3;
vector<int> adj[N];
bool visited[N]; //방문했는지 확인해주는 배열
int n,m,v;

void dfs(int cur) {
    visited[cur]=1;
    cout<<cur<<" ";
    for(int nxt : adj[cur]) { //벡터 원소 하나씩 꺼내서 nxt변수에 저장
        if(!visited[nxt]) dfs(nxt); 
    }

}

int main() {
    cin >> n >> m >> v;
    for(int i=0;i<m;i++) {
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i=1; i<n; i++) {  //정렬
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
}