#include<bits/stdc++.h>
using namespace std;
int N,M;
int mat[102][102];
bool visited[102][102];
int dx[4]={1,0,-1,0};
int dy[4] = {0,1,0,-1};
int meltingTime = 0, ans;

bool BFS() {
    int cnt = 0;
    queue<pair<int,int>> q;
    meltingTime++;

    q.push({0,0});
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x][y] = true;

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
            if(visited[nx][ny]) continue;
            if(mat[nx][ny] == 1) {
                mat[nx][ny] = 0;
                cnt++;
            }
            else q.push({nx,ny});
            visited[nx][ny] = true;
        }
    }
    if(cnt == 0) {
        cout<<--meltingTime<<'\n'<<ans;
        return true;
    }
    else {
        ans = cnt;
        return false;
    }
    

}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin>>mat[i][j];
    }
    while(true) {
        for(int i=0; i<N; i++) {
            fill(visited[i], visited[i]+M, false);
        }
        if(BFS()) break;
    }
}