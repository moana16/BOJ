#include<bits/stdc++.h>
using namespace std;
int N;
int mat[103][103];
int dist[103][103];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
queue<pair<int,int>> q;
vector<pair<int,int>> boundary;
bool visited[103][103];
int ans = 999999;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin>>mat[i][j];
        }
    }
    int idx = 2;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 1) {
                q.push({i,j});
                mat[i][j] = idx;
                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();

                    for(int r = 0; r < 4; r++){
                        int nx = x + dx[r];
                        int ny = y + dy[r];

                        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
                        if(mat[nx][ny] == mat[x][y] || mat[nx][ny] == 0) continue;
                        q.push({nx,ny});
                        mat[nx][ny] = mat[x][y];
                    }
                }
                idx++;
                
            }
        }
    }
    for(int i=0; i<N; i++) fill(dist[i],dist[i]+1,-1);
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] != 0) {
                dist[i][j] = 0;
                q.push({i,j});
            }
        }
    }

    while(!q.empty()) {
        auto cur = q.front(); q.pop();

        for(int r = 0; r < 4; r++) {
            int nx = cur.first + dx[r];
            int ny = cur.second + dy[r];
            if( nx < 0 || ny < 0 || nx >= N || ny >= N || mat[cur.first][cur.second] == mat[nx][ny]) continue;
            if(mat[nx][ny] != 0) {
                ans = min(ans, dist[nx][ny] + dist[cur.first][cur.second]);
            }
            else {
                mat[nx][ny] = mat[cur.first][cur.second];
                dist[nx][ny] = dist[cur.first][cur.second]+1;
                q.push({nx,ny});
            }
        }
    }



    
    
    cout<<ans;
}