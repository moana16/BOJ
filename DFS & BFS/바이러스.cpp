#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    bool mat[103][103];
    bool visited[103];
    memset(mat, false, sizeof(mat));
    fill(visited+1, visited+n+1, false);
    for(int i=0; i<m; i++) {
        int a,b; cin>>a>>b;
        mat[a][b] = true;
        mat[b][a] = true;
    }

    queue<int> q;
    q.push(1);
    visited[1] = true;
    int cnt = 0;
    while(!q.empty()) {
        int x = q.front(); q.pop();

        for(int i=1; i<=n; i++) {
            if(i == x || visited[i]) continue;
            if(mat[x][i]) {
                q.push(i);
                visited[i] = true;
                cnt++;
            } 
        }

    }
    cout<<cnt;
    
}