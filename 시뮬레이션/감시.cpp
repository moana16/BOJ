#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int n,m;
int mat1[10][10]; //최초 map 저장
int mat2[10][10]; //사각지대의 개수를 세기 위한 배열
vector<pair<int,int>> v; //cctv 좌표 저장


void upd(int x, int y, int d) {
    d %= 4;
    while(1) {
        x += dx[d];
        y += dy[d];
        if(x < 0 || y < 0 || x >= n || y >= m || mat2[x][y] == 6) return;
        if(mat2[x][y] != 0) continue;
        mat2[x][y] = 7;
    }
}

int main() {
    cin>>n>>m;
    int ans = 0; //사각지대 최소 크기
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat1[i][j];
            if(mat1[i][j] != 0 && mat1[i][j] != 6) {
                v.push_back({i,j});
            }
            if(mat1[i][j] == 0) ans++;
        }
    }

    for(int t=0; t<1<<(2*v.size()); t++) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                mat2[i][j] = mat1[i][j];
            }
        }
        int brute = t;
        for(int i=0; i<v.size(); i++) {
            int d = brute % 4;
            brute /= 4;
            int x = v[i].first;
            int y = v[i].second;
            if(mat1[x][y] == 1) {
                upd(x,y,d);
            }
            else if(mat1[x][y] == 2) {
                upd(x,y,d);
                upd(x,y,d+2);
            }
            else if(mat1[x][y] == 3) {
                upd(x,y,d);
                upd(x,y,d+1);
            }
            else if(mat1[x][y] == 4) {
                upd(x,y,d);
                upd(x,y,d+1);
                upd(x,y,d+2);
            }
            else if(mat1[x][y] == 5) {
                upd(x,y,d);
                upd(x,y,d+1);
                upd(x,y,d+2);
                upd(x,y,d+3);

            }
        }
        int val = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++)
                val += (mat2[i][j]==0);
        }
        ans = min(ans,val);
    }
    cout<<ans;
}

