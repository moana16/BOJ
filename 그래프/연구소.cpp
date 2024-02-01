#include<bits/stdc++.h>
using namespace std;
int N,M;
int mat[10][10];
vector<pair<int,int>> virus;
vector<pair<int,int>> wall;
bool visited[10][10];
int ans = 0;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int sol() {
    int cnt = 0;
    int tmp[10][10];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) tmp[i][j] = mat[i][j];
    }
    memset(visited,false,sizeof(visited));
    for(int i=0; i<virus.size(); i++) {
        queue<pair<int,int>> q;
        q.push({virus[i].first,virus[i].second});
        visited[virus[i].first][virus[i].second] = true;

        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int r=0; r<4; r++) {
                int nx = x + dx[r];
                int ny = y + dy[r];

                if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
                if(visited[nx][ny] || tmp[nx][ny] == 1) continue;
                tmp[nx][ny] = 2;
                q.push({nx,ny});
                visited[nx][ny] = true;
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(tmp[i][j] == 0) cnt++;
        }
    }
    return cnt;
}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 2) virus.push_back({i,j});
            if(mat[i][j] == 0) wall.push_back({i,j});
        }
    }

    for(int i=0; i<wall.size(); i++) {
        for(int j=0; j<i; j++) {
            for(int k=0; k<j; k++) {
                mat[wall[i].first][wall[i].second] = 1;
                mat[wall[j].first][wall[j].second] = 1;
                mat[wall[k].first][wall[k].second] = 1;
                ans = max(ans, sol());
                mat[wall[i].first][wall[i].second] = 0;
                mat[wall[j].first][wall[j].second] = 0;
                mat[wall[k].first][wall[k].second] = 0;

            }
        }
    }
    cout<<ans;
}