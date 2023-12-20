#include<bits/stdc++.h>
using namespace std;

int N,K,L;
int mat[103][103];
char tmp[10003];
int t=0;
int dx[4] = {0,1,0,-1}; //동 남 서 북
int dy[4] = {1,0,-1,0};
deque<pair<int,int>> dq;

int main() {
    cin>>N;
    cin>>K;
    while (K--)
    {
        int x,y; cin>>x>>y;
        mat[x][y] = 1;
    }
    
    cin>>L;
    while(L--) {
        int x; char c; cin>>x>>c;
        tmp[x] = c;
    }

    dq.push_front({1,1});
    int dir = 0;

    while(true) {
        dir %= 4;
        
        int x = dq.front().first;
        int y = dq.front().second;
        mat[x][y] = -1;
        t++;

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(nx < 1 || ny < 1 || nx > N || ny > N) break;
        if(mat[nx][ny] == -1) break; //자기 자신일 경우

        if(mat[nx][ny] == 0) {
            auto tail = dq.back();
            mat[tail.first][tail.second] = 0;
            dq.pop_back();
        }

        if(tmp[t] == 'L') dir += 3;
        else if(tmp[t] == 'D') dir += 1;
        
        dq.push_front({nx,ny});

    }
    cout<<t;
    


}