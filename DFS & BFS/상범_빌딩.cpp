#include<bits/stdc++.h>
using namespace std;

char mat[33][33][33];
int visited[33][33][33];
int dx[6] = {0,0,0,0,1,-1};
int dy[6] = {1,0,-1,0,0,0};
int dz[6] = {0,1,0,-1,0,0};


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    while(true) {
        int L,R,C; cin>>L>>R>>C;
        if(L == 0 && R == 0 && C == 0) break;
        
        memset(mat,0,sizeof(mat));
        memset(visited,-1,sizeof(visited));
        queue<tuple<int,int,int>> q;
        string s;
        for(int i=0; i<L; i++) {
            for(int j=0; j<R; j++) {
                cin>>s;
                for(int k=0; k<C; k++) {
                    mat[i][j][k] = s[k];
                    if(mat[i][j][k] == 'S') {
                        q.push(make_tuple(i,j,k));
                        visited[i][j][k] = 0;
                    }
                }
            }
        }
        int cnt = 0;
        bool flag = false;

        while(!q.empty()) {
            int x = get<0>(q.front());
            int y = get<1>(q.front());
            int z = get<2>(q.front());
            if(mat[x][y][z] == 'E') {
                    flag = true;
                    cout<<"Escaped in "<<visited[x][y][z]<<" minute(s)."<<'\n';
                    break;
                }
            q.pop();
            
            for(int r = 0; r < 6; r++) {
                int nx = x + dx[r];
                int ny = y + dy[r];
                int nz = z + dz[r];

                if(nx < 0 || ny < 0 || nz < 0 || nx >= L || ny >= R || nz >= C) continue;
                if(mat[nx][ny][nz] == '#' || visited[nx][ny][nz] != -1) continue;
                
                q.push(make_tuple(nx,ny,nz));
                visited[nx][ny][nz] = visited[x][y][z] + 1;
                cnt++;
            }
        }
        if(!flag) cout<<"Trapped!"<<'\n';

    }
}