#include<bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int mat[1002][1002], visited[1002][1002];
queue<pair<int,int>> q;


bool checkCanGo(int H, int W, int nx, int ny, int r) {
    if(r == 0) {
        for(int j = ny; j < ny + W; j++){
            if(mat[nx + H - 1][j] == 1) return false;
        }
    }
    else if (r == 1) {  // 오른쪽으로 이동
        for (int i = nx; i < nx + H; i++) {
            if (mat[i][ny + W - 1] == 1) return false;
        }
    } else if (r == 2) {  // 위로 이동
        for (int j = ny; j < ny + W; j++) {
            if (mat[nx][j] == 1) return false;
        }
    } else if (r == 3) {  // 왼쪽으로 이동
        for (int i = nx; i < nx + H; i++) {
            if (mat[i][ny] == 1) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M, H, W, Sr, Sc, Fr, Fc;

    cin>>N>>M;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
        }
    }

    memset(visited, -1, sizeof(visited));

    cin>>H>>W>>Sr>>Sc>>Fr>>Fc;


    q.push({Sr, Sc});
    visited[Sr][Sc] = 0;


    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r = 0; r < 4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > N || ny > M || visited[nx][ny] != -1 || mat[nx][ny] == 1) continue;
            if(nx + H-1 > N || ny + W - 1 > M) continue;
            if(checkCanGo(H, W, nx, ny, r)) {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    cout<<visited[Fr][Fc];

}