#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main() {
    int N,M; cin>>N>>M;
    int mat[102][102];
    for(int i=1; i<=N; i++) {
        string str; cin>>str;
        for(int j=1; j<=M; j++) {
            mat[i][j] = str[j-1] - '0';
        }
    }

    queue<pair<int,int>> q;
    q.push({1,1});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > N || ny > M || mat[nx][ny] == 0) continue;
            if(mat[nx][ny] == 1) {
                mat[nx][ny] = mat[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }

    cout<<mat[N][M];
}