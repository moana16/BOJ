#include <bits/stdc++.h>
using namespace std;
int mat[303][303];
int dx[8] = {2,1,-1,-2,2,1,-1,-2};
int dy[8] = {-1,-2,-2,-1,1,2,2,1};

void BFS(int l, int sx, int sy, int ex, int ey) {
    queue<pair<int,int>> q;
    q.push({sx,sy});

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(x == ex && y == ey) break;
        for(int i=0; i<8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
            if(mat[nx][ny] != 0) continue;
            mat[nx][ny] = mat[x][y] + 1;
            q.push({nx,ny});
        }
    }
    cout<<mat[ex][ey]<<'\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin>>t;
    while(t--) {
        int l; cin>>l;
        for(int i=0; i<l; i++) fill(mat[i], mat[i]+l,0);
        int sx, sy, ex, ey;
        cin>>sx>>sy;
        cin>>ex>>ey;
        BFS(l,sx, sy, ex, ey);
    }
}