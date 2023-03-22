#include <bits/stdc++.h>
using namespace std;
char mat[102][102];
bool visited[102][102];
int N;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void BFS(int i, int j) { //같은 색깔만 배회하는..
    queue<pair<int,int>> q;
    q.push(make_pair(i,j));
    visited[i][j] = true;

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int d=0; d<4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visited[nx][ny] == true || mat[i][j] != mat[nx][ny]) continue;
            visited[nx][ny] = true;
            q.push(make_pair(nx,ny));
        }
    }

}
int area() { //영역의 개수 구하는 함수
    int cnt = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!visited[i][j]) {
                BFS(i,j);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N;
    
    for(int i=0; i<N; i++) {
        string s; cin>>s;
        for(int j=0; j<N; j++) 
            mat[i][j] = s[j];
    }
    

    int ret_n = area(); //적녹색약이 아닌 사람
    cout<<ret_n<<" ";
    for(int i=0; i<N; i++)
        fill(visited[i], visited[i]+N, false);

    for(int i=0; i<N; i++ ) {
        for(int j=0; j<N; j++) {
            if(mat[i][j] == 'G')
                mat[i][j] = 'R';
        }
    } 
    int ret = area(); //적녹색약 인 사람
    cout<<ret;

}