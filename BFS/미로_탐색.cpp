#include <bits/stdc++.h>
using namespace std;

int mat[102][102];
int N,M;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int ans=0;
queue<pair<int,int>> q;

void BFS() {
    q.push(make_pair(0,0));
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++) {
            
            int nx = x + dx[i];
            int ny = y + dy[i];
                
            if(nx >= 0 && ny >= 0 && nx < N && ny < M ) {
                if(mat[nx][ny]==1) {
                    mat[nx][ny]=mat[x][y]+1;
                    q.push(make_pair(nx,ny));
                }
            
            }
        }
    }
}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        string s;
        cin>>s;
        for (int j=0; j<M; ++j){        // 행 별 좌표값 저장
            mat[i][j] = s[j]-'0';    // 행 별 좌표값들은 문자 형태이기 때문에, 숫자로 변환
        }        
    }
    BFS();
    cout<<mat[N-1][M-1];
        
}