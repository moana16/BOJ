#include<bits/stdc++.h>
using namespace std;

int N,M,ans = 0;
int dist[55][55];
int mat[55][55];
int dr[8][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}, {1,1}, {-1,-1}, {1,-1}, {-1,1}};

void BFS() {
    queue<pair<int,int>> q;
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] == 1) {
                q.push({i,j});
                dist[i][j] = 0;
            }else dist[i][j] = -1;
        }
    }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r=0; r<8; r++) {
            int nx = x + dr[r][0];
            int ny = y + dr[r][1];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M || dist[nx][ny] != -1) continue; 
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx,ny});

        }
    }
}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>mat[i][j];
        }
    }

    BFS();

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            ans = max(ans, dist[i][j]);
        }
    }
    cout<<ans;


}