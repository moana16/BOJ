//최소이동거리 구하기!!
#include <bits/stdc++.h>
using namespace std;

int dx[] = {1,2,2,1,-1,-2,-2,-1};
int dy[] = {-2,-1,1,2,2,1,-1,-2};


void BFS(int N, int i, int j, int fx, int fy) {
    int ans = 0;
    int visited[N+2][N+2];
    for(int i=0; i<N; i++) fill(visited[i], visited[i]+N, -1);
    queue<pair<int, int>> q;
    q.push(make_pair(i,j));
    visited[i][j] = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x == fx && y == fy) {
            cout<<visited[x][y]<<'\n';
            return;
        }

        for(int d=0; d<8; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visited[nx][ny] >= 0) continue;
            visited[nx][ny] = visited[x][y] + 1;
            q.push(make_pair(nx,ny));
        }
    }


}

int main() {
    int cnt; cin>>cnt;
    while(cnt--) {
        int N; cin>>N;
        int x,y; cin>>x>>y;
        int fx, fy; cin>>fx>>fy;
        
        
        BFS(N,x,y,fx,fy);
    }
}