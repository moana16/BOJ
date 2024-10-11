#include<bits/stdc++.h>
using namespace std;
char mat[9][9];
bool visited[9][9][16];
int dr[9][2] = {{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1},{0,0}};


int main() {
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin>>mat[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    queue<tuple<int,int,int>> q;
    q.push({7,0,0});
    visited[7][0][0] = true;


    while(!q.empty()) {
        int size = q.size();

        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int t = get<2>(q.front());
        q.pop();

        if(x == 0 && y == 7) {
                cout<<1;
                return 0;
        }

        if(t >= 8) { // 모든 벽이 사라졌으므로 성공
            cout<<1;
            return 0;
        }

        int nxt = t+1;
            
        for(int r=0; r<9; r++) {
            int nx = x + dr[r][0];
            int ny = y + dr[r][1];

            if(nx < 0 || ny < 0 || nx >= 8 || ny >= 8) continue;

            bool blocked_now = false;
            if((nx-t) >= 0 && mat[nx-t][ny] == '#') blocked_now = true;

            bool blocked_next = false;
            if((nx-nxt) >= 0 && mat[nx-nxt][ny] == '#') blocked_next = true;

            if(blocked_now || blocked_next) continue;

            if(nxt <= 8 && !visited[nx][ny][nxt]) {
                visited[nx][ny][nxt] = true;
                q.push({nx,ny,nxt});
            }
        }
    }
    cout<<0;
}