#include<bits/stdc++.h>
using namespace std;

int H,W;
char mat[102][102];
int ans[102][102];

int main() {
    cin>>H>>W;
    for(int i=0; i<H; i++) fill(ans[i], ans[i]+W,-1);
    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) {
            cin>>mat[i][j];
            if(mat[i][j] == 'c') ans[i][j] = 0;
        }
    }

    for(int i=0; i<H; i++) {
        int idx = -1;
        for(int j=0; j<W; j++) {
            if(ans[i][j] == 0) idx = j;
            else {
                if(idx != -1) ans[i][j] = j-idx;
            }
        }
    }

    for(int i=0; i<H; i++) {
        for(int j=0; j<W; j++) cout<<ans[i][j]<<" ";
        cout<<'\n';

    }

}