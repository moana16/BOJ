#include<bits/stdc++.h>
using namespace std;

int N,M,K;
int mat[1003][1003];
int dist[13][1003][1003];
queue<tuple<int,int,int>> q;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int MN = 0x7f7f7f7f;

int main() {
    cin>>N>>M>>K;
    for(int i=1; i<=N; i++) {
        string s; cin>>s;
        for(int j=1; j<=M; j++) {
            mat[i][j] = s[j-1]-'0';
        }
    }
        
    
    memset(dist, -1, sizeof(dist));
    dist[0][1][1] = 1;
    q.push({0,1,1});

    while(!q.empty()) {
        int t = get<0>(q.front());
        int x = get<1>(q.front());
        int y = get<2>(q.front());
        q.pop();

        for(int r=0; r<4; r++) {
            int nx = x + dx[r];
            int ny = y + dy[r];

            if(nx <= 0 || ny <= 0 || nx > N || ny > M) continue;
            if(mat[nx][ny] == 1 && t < K && dist[t+1][nx][ny] == -1) {
                dist[t+1][nx][ny] = dist[t][x][y] + 1;
                q.push({t+1,nx,ny});
            }
            else if(mat[nx][ny] == 0 && dist[t][nx][ny] == -1) {
                dist[t][nx][ny] = dist[t][x][y] + 1;
                q.push({t,nx,ny});
            }

        }
            
    }

    for(int i =0; i<=K; i++) {
        if(dist[i][N][M] != -1) MN = min(MN, dist[i][N][M]);
    }
    if(MN != 0x7f7f7f7f) cout<<MN;
    else cout<<-1;
}