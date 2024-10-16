#include<bits/stdc++.h>
using namespace std;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int N,M,T; cin>>N>>M;
    vector<vector<tuple<int,int,int>>> v(N);
    int mat[N+1][M+1];
    bool visited[N+1][M+1];
    memset(visited, false, sizeof(visited));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int r,g,b; cin>>r>>g>>b;
            mat[i][j] = (r + g + b ) / 3;
        }
    }
    cin>>T;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] >= T) mat[i][j] = 255;
            else mat[i][j] = 0;
        }
    }

    queue<pair<int,int>> q;
    int ans = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] == 255 && !visited[i][j]) {
                q.push({i,j});
                ans++;

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int r=0; r<4; r++) {
                        int nx = x + dx[r];
                        int ny = y + dy[r];

                        if(nx < 0 || ny < 0 || nx >= N || ny >= M || visited[nx][ny] || mat[nx][ny] == 0) continue;
                        q.push({nx,ny});
                        visited[nx][ny] = true;
                    }
                }
            }
        }
    }

    cout<<ans;



}