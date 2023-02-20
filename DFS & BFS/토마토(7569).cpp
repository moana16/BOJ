#include <bits/stdc++.h>
using namespace std;
constexpr int MAX = 100;

int M,N,H; //M은 가로 N은 세로
int mat[MAX][MAX][MAX]; //1은 익은토마토, 0은 익지않은 토마토, -1은 토마토가 없는 칸

int dx[]={1,0,-1,0,0,0};
int dy[]={0,1,0,-1,0,0};
int dz[]={0,0,0,0,1,-1};
int result=0;
queue<tuple<int,int,int>> q; //1인 좌표값을 저장해주기 위한 큐

void BFS() {
    while(!q.empty()) {
        int x = get<1>(q.front());
        int y = get<2>(q.front());
        int z = get<0>(q.front());

        q.pop();

        for(int i=0; i<6;i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];
            int nz = z+dz[i];

            if(nx >= 0 && ny >= 0 && nz >=0 && nx < N && ny < M && nz < H) {
                if(mat[nz][nx][ny] ==0){
                    mat[nz][nx][ny]= mat[z][x][y] +1; //why?
                    q.push(make_tuple(nz,nx,ny));
                }
            }
        }
    } 
}
int main(){
    cin>>M>>N>>H;
    for(int k=0;k<H;k++) {
    for(int i=0; i<N; i++) {
        for(int j=0;j<M;j++) {
            
                cin>>mat[k][i][j];

                if(mat[k][i][j]==1) q.push(make_tuple(k,i,j)); //익은 토마토의 좌표 큐에 저장
            }
            

            
        }
    }

    BFS();
    for(int k=0;k<H;k++) {
    for(int i=0; i<N;i++) {
        for(int j=0; j<M;j++) {
            
                if(mat[k][i][j]==0) {
                    cout<<-1<<"\n";
                return 0; 
                }
                else if(result < mat[k][i][j]) {
                    result = mat[k][i][j];
                }
            }
            
        }
    }
    cout<<result-1<<endl;
    return 0;
  


}