#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 1000;
int M,N; //M은 가로 N은 세로
int mat[MAX][MAX]; //1은 익은토마토, 0은 익지않은 토마토, -1은 토마토가 없는 칸

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int result=0;
queue<pair<int,int>> q; //1인 좌표값을 저장해주기 위한 큐

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
int main(){
    cin>>M>>N;

    for(int i=0; i<N; i++) {
        for(int j=0;j<M;j++) {
            cin>>mat[i][j];

            if(mat[i][j]==1) q.push(make_pair(i,j)); //익은 토마토의 좌표 큐에 저장
        }
    }

    BFS();

    for(int i=0; i<N;i++) {
        for(int j=0; j<M;j++) {
            if(mat[i][j]==0) {
                cout<<-1<<"\n";
                return 0; 
            }
            else if(result < mat[i][j]) {
                result = mat[i][j];
            }
        }
    }
    cout<<result-1<<endl;
    return 0;



}