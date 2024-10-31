#include<bits/stdc++.h>
using namespace std;

int mat[3003][3003];
int dist[3003][3003];

int dr[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    queue<pair<int,int>> q;
    memset(dist, -1, sizeof(dist));

    int n,m; cin>>n>>m;

    for(int i=0; i<n; i++) {
        string str; cin>>str;
        for(int j=0; j<m; j++) {
            mat[i][j] = str[j]-'0';
            if(mat[i][j] == 2) {
                q.push({i,j});
                dist[i][j] = 0;
            } 
        }
    }

    while (!q.empty()) 
    {

        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(mat[x][y] >= 3) break;

        for(int r=0; r<4; r++) {
            int nx = x + dr[r][0];
            int ny = y + dr[r][1];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m || dist[nx][ny] != -1 || mat[nx][ny] == 1) continue;
            q.push({nx,ny});
            dist[nx][ny] = dist[x][y] + 1;
        }
    }

    bool flag = false;
    int mn = INT_MAX;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(mat[i][j] >= 3 && dist[i][j] != -1) {
                flag = true;
                mn = min(mn, dist[i][j]);
            }
        }
    }

    if(!flag) cout<<"NIE";
    else {
        cout<<"TAK"<<"\n"<<mn;
    }
    
}