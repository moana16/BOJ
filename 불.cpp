#include <bits/stdc++.h>
using namespace std;
int N,M;
char mat[1002][1002];
int distf[1002][1002]; //불
int dists[1002][1002]; //상근
queue<pair<int,int>> qf; //불
queue<pair<int,int>> qs; //상근
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
string noescape = "IMPOSSIBLE";

void sol() {
    while(!qs.empty()) {
        int x = qs.front().first;
        int y = qs.front().second;
        dists[x][y] = 0;
        qs.pop();
        

        for(int d=0; d<4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) {
                cout<<dists[x][y]+1<<'\n';
                return;

            }
            if(mat[nx][ny] != '.' && dists[nx][ny >= 0]) continue;
            if(dists[nx][ny] <= distf[nx][ny]  && distf[nx][ny] != -1) continue;
            dists[nx][ny] = dists[x][y] +1;
            qs.push(make_pair(nx,ny));
                    
            }
        
    }
    cout<<noescape<<'\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int x; cin>>x;
    while(x--) {
        cin>>M>>N;
        for(int i=0; i<N; i++) {
            fill(distf[i], distf[i]+M, 0);
            fill(dists[i], dists[i]+M, 0);
            }
        for(int i=0; i<N; i++) {
            string s; cin>>s;
            for(int j=0; j<M; j++) {
                mat[i][j] = s[j];
                if(mat[i][j] == '@') {
                    qs.push(make_pair(i,j));
                    dists[i][j] = 1;
                    }
                else if(mat[i][j] == '*') {
                    qf.push(make_pair(i,j));
                    distf[i][j] == 1;
                    }
                else if(mat[i][j] == '#') distf[i][j] == -1;

            }
        }
        
        

        while(!qf.empty()) {
                int x = qf.front().first;
                int y = qf.front().second;
                qf.pop();

                for(int d=0; d<4; d++) {
                    int nx = x + dx[d];
                    int ny = y + dy[d];
                    if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if()
                    if(distf[nx][ny] == -1  && mat[nx][ny] != '.') continue;
                    distf[nx][ny] = distf[x][y] +1;
                    qf.push(make_pair(nx,ny));
                    
                }
            }
    sol();

    }
}