#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> goal;
int mat[1002][1002], ans[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    queue<pair<int,int>> q;

    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 2) {
                q.push({i,j});
                goal.first = i, goal.second = j;

            } 
        }
    }
    memset(ans, 0, sizeof(ans));

    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(goal.first == nx && goal.second == ny) continue;
            if(nx < 0 || ny < 0 || nx >= n || ny >= m || mat[nx][ny] == 0 || ans[nx][ny] != 0) continue;
            ans[nx][ny] = ans[x][y] + 1;
            q.push({nx,ny});
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] == 1 && ans[i][j] == 0) ans[i][j] = -1;
            cout<<ans[i][j]<<" ";
        }
        cout<<'\n';
    }




    
}