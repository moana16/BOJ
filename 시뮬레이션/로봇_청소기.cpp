#include<bits/stdc++.h>
using namespace std;

int N,M,x,y,d;
int ans = 0;
int mat[55][55];
int dr[4][2]={{-1,0},{0,1},{1,0},{0,-1}};

int main() {
    cin>>N>>M;
    cin>>x>>y>>d;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin>>mat[i][j];
    }

    int chkCnt = 0;

    while(true) {
        if(mat[x][y] == 0) ans++;
        mat[x][y] = -1;
        bool cleaned = false;
        for(int i=0; i<4; i++) {
            d = (d+3) % 4;
            if(mat[x+dr[d][0]][y+dr[d][1]] == 0) {
                x += dr[d][0];
                y += dr[d][1];
                cleaned = true;
                break;
            }
        }
        if(cleaned) continue;

        if(mat[x-dr[d][0]][y-dr[d][1]] == 1)  break;
        x -= dr[d][0];
        y -= dr[d][1];
    }
    cout<<ans;
}