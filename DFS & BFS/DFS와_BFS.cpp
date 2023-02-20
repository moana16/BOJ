#include <bits/stdc++.h>
using namespace std;

constexpr int N=1e3+3;

bool mat[N][N]; //인접행렬
bool visited[N]; //방문했는지 확인해주는 배열
bool visited2[N];
int n,m,v;

//인접행렬
void dfs(int cur) {
    visited[cur]=1;
    cout<<cur<<" ";
    for(int i=1;i<=n;i++) { //노드 번호가 1부터니까
        if(mat[cur][i] && !visited[i]) 
            dfs(i);

    }

}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited2[start]=true;

    while(!q.empty()) {
        start=q.front(); q.pop();
        cout<<start<<" ";
        for(int i=1; i<=n;i++) {
            if(mat[start][i] && !visited2[i]) {
                q.push(i);
                visited2[i]=true;
            
            }
        }
    }
}
int main() {
    cin >> n >> m >> v;
    for (int i=0; i<m; i++) {
        int a,b; 
        cin>>a>>b;
        mat[a][b]=mat[b][a]=1;
    }
    dfs(v);
    cout<<'\n';
    bfs(v);
    
}