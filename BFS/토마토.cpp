#include <bits/stdc++.h>
using namespace std;

int N,M;
int mat[1002][1002];
queue<pair<int,int>> q;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int ans=0;

void BFS() {
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i=0; i<4;i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];

            if(nx >= 0 && ny >= 0 && nx < N && ny < M) {
                if(mat[nx][ny] ==0){
                    mat[nx][ny] = mat[x][y] +1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    } 
}
int main() {
    cin>>M>>N; //이런걸로..틀리기냐?진심개짜증남...
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin>>mat[i][j];
            if(mat[i][j]==1) q.push(make_pair(i,j));
        }

    }
    BFS();
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(mat[i][j] == 0) {
                cout<<-1;
                return 0;
            }
            ans = max(ans,mat[i][j]);
        }

    }
    cout<<ans-1;
}