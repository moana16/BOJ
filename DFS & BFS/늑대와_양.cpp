#include<bits/stdc++.h>
using namespace std;

int R,C;
char mat[505][505];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    cin>>R>>C;
    int ans = 0;
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(mat[i][j] == 'W') {
                for(int r=0; r<4; r++) {
                    int nx = i + dx[r];
                    int ny = j + dy[r];
                    if(nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
                    if(mat[nx][ny] == 'S') {
                        cout<<0;
                        return 0;
                    }
                    if(mat[nx][ny] == '.') mat[nx][ny] = 'D';

                }
            }
        }
    }


    cout<<1<<'\n';
        for(int i=0; i<R; i++) {
            for(int j=0; j<C; j++) {
                cout<<mat[i][j];
            }
            cout<<'\n';
        }

    return 0;
}