#include<bits/stdc++.h>
using namespace std;

int mat[103][103], visited[103][103][2];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    int N,M,T; cin>>N>>M>>T;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
        }
    }
    memset(visited, -1, sizeof(visited));

    queue<tuple<int,int,int>> q;
    q.push({1,1,0});
    visited[1][1][0] = 0;

    while(!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int hasGram = get<2>(q.front());
        q.pop();
    

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > N || ny > M || visited[nx][ny][hasGram] != -1) continue;
            if(!hasGram && mat[nx][ny] == 1) continue;
            if(mat[nx][ny] == 2) {
                visited[nx][ny][1] = visited[x][y][hasGram] + 1;
                q.push({nx,ny, 1});
            }
            else {
                visited[nx][ny][hasGram] = visited[x][y][hasGram] + 1;
                q.push({nx,ny, hasGram});

                
            }

        }
    }
    int res;

    if(visited[N][M][0] != -1 && visited[N][M][1] != -1) res = min(visited[N][M][0], visited[N][M][1]);
    else if(visited[N][M][0] != -1) res = visited[N][M][0];
    else if(visited[N][M][1] != -1) res = visited[N][M][1];

    if(res == -1 || res > T) cout<<"Fail";
    else cout<<res;


}