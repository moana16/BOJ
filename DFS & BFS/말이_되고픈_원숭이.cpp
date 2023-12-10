#include<bits/stdc++.h>
using namespace std;
int K,W,H;
int mat[202][202];
queue<tuple<int,int,int>> q;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int hx[8] = {-2,-1,1,2,-2,-1,1,2};
int hy[8] = {1,2,2,1,-1,-2,-2,-1};

int MN = 0x7f7f7f7f;

int main() {
    cin>>K;
    cin>>W>>H;
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin>>mat[i][j];
        }
    }
    int dist[K+1][H+1][W+1];
    
    memset(dist,-1,sizeof(dist));
    dist[0][0][0] = 0;
    q.push(make_tuple(0,0,0));

    while(!q.empty()) {
        int t = get<0>(q.front());
        int x = get<1>(q.front());
        int y = get<2>(q.front());
        q.pop();

        if(t < K) {
            for(int r=0; r<8; r++) {
                int nx = x + hx[r];
                int ny = y + hy[r];

                if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                if(mat[nx][ny] == 1 || dist[t+1][nx][ny] != -1) continue;
                q.push({t+1,nx,ny});
                dist[t+1][nx][ny] = dist[t][x][y]+1;
            }
        }
       for(int r=0; r<4; r++) {
                int nx = x + dx[r];
                int ny = y + dy[r];

                if(nx < 0 || ny < 0 || nx >= H || ny >= W) continue;
                if(mat[nx][ny] == 1 || dist[t][nx][ny] != -1) continue;
                q.push({t,nx,ny});
                dist[t][nx][ny] = dist[t][x][y]+1;
            }



    }

    for(int i=0; i<=K; i++) {
        if(dist[i][H-1][W-1] > -1) MN = min(MN, dist[i][H-1][W-1]);
    }

    if(MN != 0x7f7f7f7f) cout<<MN;
    else cout<<-1;
}