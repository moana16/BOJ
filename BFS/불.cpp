//불의 BFS를 미리 구한 후
//지훈이의 BFS보다 경로 길이가 짧으면 못가는 것이 핵심
#include <bits/stdc++.h>
using namespace std;
int N,M;
char mat[1002][1002];
queue<pair<int,int>> qf;
queue<pair<int,int>> qj;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int distF[1002][1002];
int distJ[1002][1002];
string noescape = "IMPOSSIBLE";

void BFS() {
    while(!qf.empty()) { //불 먼저 BFS 돌림
        int x = qf.front().first;
        int y = qf.front().second;
        qf.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(distF[nx][ny] >= 0 || mat[nx][ny] == '#') continue; //거리 값이 0보다 클 때도 제외 해 주어야 함
            distF[nx][ny] = distF[x][y] + 1;
            qf.push(make_pair(nx,ny));
        }

    }
    while(!qj.empty()) { //지훈 BFS 돌림
        int x = qj.front().first;
        int y = qj.front().second;
        qj.pop();

        for(int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= N || ny < 0 || ny >= M ) {
                cout<<distJ[x][y]+1;
                return;
                
            }
            if(distJ[nx][ny] >= 0 || mat[nx][ny] == '#') continue;
            if(distF[nx][ny] != -1 && distF[nx][ny] <= distJ[x][y] +1) continue; //불의 전파시간보다 지훈의 거리가 같거나 크면 못감!! 불의 전파시간이 훨씬 길어야함
            distJ[nx][ny] = distJ[x][y]+1;
            qj.push(make_pair(nx,ny));
        
        }

    }
    cout<<noescape;

}

int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) {
        fill(distF[i],distF[i]+M,-1);
        fill(distJ[i],distJ[i]+M,-1);
    }
    for(int i=0; i<N; i++) {
        string s; cin>>s;
        for(int j=0; j<M; j++) {
            mat[i][j]=s[j];
            if(mat[i][j] == 'J') {
                qj.push(make_pair(i,j)); 
                distJ[i][j] = 0;
            }//지훈 시작점 찾기
            if(mat[i][j] == 'F') {
                qf.push(make_pair(i,j));
                distF[i][j] = 0;
            } //불 시작점 찾기
        }

    }
    
    BFS();

}