#include<bits/stdc++.h>
using namespace std;

int R,C,K;
char mat[7][7];
bool visited[7][7];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int ans = 0;

void sol(int x, int y, int cnt) {

    if(x == 1 && y == C ) {
        if(cnt == K) ans++;
        return;
    }

    for(int r=0; r<4; r++) {
        int nx = x + dx[r];
        int ny = y + dy[r];

        if(nx <= 0 || ny <= 0 || nx > R || ny > C || visited[nx][ny] || mat[nx][ny] == 'T') continue;
        visited[nx][ny] = true;
        sol(nx,ny,cnt+1);
        visited[nx][ny] = false;
    }



}

int main() {
    cin>>R>>C>>K;

    for(int i=1; i<=R; i++) {
        for(int j=1; j<=C; j++) {
            cin>>mat[i][j];
        }
    }

    visited[R][1] = true;
    sol(R, 1, 1);
    cout<<ans;



}