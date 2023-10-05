#include <bits/stdc++.h>
using namespace std;

int mat[1002][1002];
bool visited[2][1002][1002];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int dist[1002][1002];

typedef struct{
    int x;
    int y;
    int breaked; // 0이면 부순거 1이면 안부순거
}st;

queue<st> q;
int main() {
    int N,M; cin>>N>>M;
    for(int i=0; i<N; i++) {
        string s; cin>>s;
        for(int j=0; j<M; j++) {
            mat[i][j] = s[j]-'0';
        }
    }
    q.push({0,0,0});
    dist[0][0] = 1;
    visited[0][0][0] = true;

    while(!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        int isBreaked = q.front().breaked;
        if(x == N-1 && y == M-1) {
            cout<<dist[x][y];
            return 0;
        }
        
        q.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(mat[nx][ny] == 0 && !visited[isBreaked][nx][ny]) { // 벽이 아닌곳
                q.push({nx,ny,isBreaked});
                visited[isBreaked][nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
            }
            if(isBreaked == 0 && mat[nx][ny] == 1 && !visited[isBreaked][nx][ny]) { //벽이고 부순적 없고 방문하지 않은 곳
                q.push({nx,ny,1});
                visited[1][nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    cout<<-1;

    
    
}