#include<bits/stdc++.h>
using namespace std;

int dr[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int main() {
    int T; cin>>T;
    while(T--) {
        int H,W; cin>>H>>W; 

        int cnt = 0;
        char mat[102][102];
        bool visited[102][102];

        memset(visited, false, sizeof(visited));

        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                cin>>mat[i][j];
            }
        }

        for(int i=0; i<H; i++) {
            for(int j=0; j<W; j++) {
                if(mat[i][j] == '#' && !visited[i][j]) {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    visited[i][j] = true;
                    cnt++;

                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        for(int r=0; r<4; r++) {
                            int nx = x + dr[r][0];
                            int ny = y + dr[r][1];

                            if(nx < 0 || nx >= H || ny < 0 || ny >= W || visited[nx][ny] || mat[nx][ny] == '.') continue;
                            q.push({nx,ny});
                            visited[nx][ny] = true;
                        }
                    }
                }
            }
        }

        cout<<cnt<<'\n';

    }
}