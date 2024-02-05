#include<bits/stdc++.h>
using namespace std;

int N,M;
char mat[55][55];
vector<pair<int,int>> land;
int visited[55][55];
int arr[101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
pair<int,int> st;
pair<int,int> en;
int cnt = 0;
int MX = 0;

int sol(int x,int y) {
    queue<pair<int,int>> q;
    memset(visited, -1, sizeof(visited));
    int ans = 0;

    q.push({x, y});
    visited[x][y] = 0;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();


        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(visited[nx][ny] != -1 || mat[nx][ny] == 'W') continue;
            
            visited[nx][ny] = visited[x][y] + 1;
            ans = max(ans, visited[nx][ny]);
            q.push({nx,ny});
        }
    }
    return ans;


}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 'L') land.push_back({i,j});
        }
    }
    
    for(int i=0; i<land.size(); i++) {
        MX = max(MX, sol(land[i].first, land[i].second));
    }

    cout<<MX;


}