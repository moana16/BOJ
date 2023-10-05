#include <bits/stdc++.h>
using namespace std;
int mat[102][102];
bool visited[102][102];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int N;
int srt=0;
queue<pair<int,int>> q;
queue<pair<int,int>> ql;


int main() {
    cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin>>mat[i][j];
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 0 || visited[i][j]) continue;
            q.push({i,j});
            visited[i][j] = true;
            if()
        }
    }
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        cout<<x<<" "<<y<<'\n';
        q.pop();
        if(q.size == 0) ql.push({x,y});

        for(int d=0; d<4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visited[nx][ny] || mat[nx][ny] == 0) continue;
            q.push({nx,ny});
            visited[nx][ny] = true;
            
        }

    }

}