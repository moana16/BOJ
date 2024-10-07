#include<bits/stdc++.h>
using namespace std;
int N;
vector<vector<int>> tree;
vector<int> parent;

void dfs(int node, int par) {
    parent[node] = par;

    for(int nxt : tree[node]) {
        if(nxt != par) {
            dfs(nxt, node);
        }
    }
}

int main() {
    cin>>N;
    tree.resize(N+1);
    parent.resize(N+1);

    for(int i=0; i<N; i++) {
        int a,b; cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    dfs(1,0);

    for(int i=2; i<=N; i++) cout<<parent[i]<<'\n';
}