#include<bits/stdc++.h>
using namespace std;

int R,C;
char mat[1002][1002];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int distJ[1002][1002];
int distF[1002][1002];

queue<pair<int,int>> J;
queue<pair<int,int>> F;


int main() {
    cin>>R>>C;

    for(int i=0; i<R; i++) {
        fill(distJ[i], distJ[i]+C, -1);
        fill(distF[i], distF[i]+C, -1);
    }
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 'J') {
                J.push({i,j});
                distJ[i][j] = 0;
            }
            if(mat[i][j] == 'F') {
                F.push({i,j});
                distF[i][j] = 0;
            }
        }
    }

    while(!F.empty()) {
        int fx = F.front().first;
        int fy = F.front().second;
        F.pop();

        for(int r=0; r<4; r++) {
            int nfx = fx + dx[r];
            int nfy = fy + dy[r];

            if(nfx < 0 || nfy < 0 || nfx >= R || nfx >= C) continue;
            if(mat[nfx][nfy] == '#' | distF[nfx][nfy] != -1) continue;
            distF[nfx][nfy] = distF[fx][fy] + 1;
            F.push({nfx, nfy});
        }

    }

    while(!J.empty()) {
        int jx = J.front().first;
        int jy = J.front().second;
        J.pop();

        for(int r=0; r<4; r++) {
            int njx = jx + dx[r];
            int njy = jy + dy[r];

            if(njx < 0 || njy < 0 || njx >= R || njy >= C) {
                cout<<distJ[jx][jy]+1;
                return 0;
            }
            if(mat[njx][njy] == '#' || distJ[njx][njy] != -1) continue;
            if(distF[njx][njy] != -1 && distF[njx][njy] <= distJ[jx][jy] + 1) continue;
            distJ[njx][njy] = distJ[jx][jy] + 1;
            J.push({njx, njy});
        }

    }
    
    cout<<"IMPOSSIBLE";
}