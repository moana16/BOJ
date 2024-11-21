#include<bits/stdc++.h>
using namespace std;

char mat[55][5][7];

int main() {
    int N; cin>>N;
    for(int i=1; i<=N; i++) {
        for(int x=0; x<5; x++) {
            for(int y=0; y<7; y++) {
                cin>>mat[i][x][y];
            }
        }
    }

    pair<int,int> ans;
    int mn = INT_MAX;

    int cnt = 0;

    for(int i=1; i<=N; i++) {
        for(int j=i+1; j<=N; j++) {
            for(int x=0; x<5; x++) {
                for(int y=0; y<7; y++) {
                    if(mat[i][x][y] != mat[j][x][y]) cnt++;
                }
            }
            if(mn > cnt) {
                mn = cnt;
                ans = {i,j};

            }
            cnt = 0;
        }
    }

    cout<<ans.first<<" "<<ans.second;
}