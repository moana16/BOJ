#include<bits/stdc++.h>
using namespace std;

int dr[8][2] = {{0,1},{1,0},{0,-1}, {-1,0}, {1,1}, {1,-1}, {-1,1}, {-1,-1}};

int main() {

    while(true) {
        int w,h; cin>>w>>h;
        if(w == 0 && h == 0) break;
        int mat[h+2][w+2];
        bool visited[h+2][w+2];
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                cin>>mat[i][j];
            }
        }

        memset(visited, false, sizeof(visited));

        int cnt = 0;
        for(int i=0; i<h; i++) {
            for(int j=0; j<w; j++) {
                if(mat[i][j] == 1 && !visited[i][j]) {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    visited[i][j] = true;
                    cnt++;

                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();

                        for(int r=0; r<8; r++) {
                            int nx = x + dr[r][0];
                            int ny = y + dr[r][1];

                            if(nx < 0 || nx >= h || ny < 0 || ny >= w || visited[nx][ny] || mat[nx][ny] == 0) continue;
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