#include<bits/stdc++.h>
using namespace std;

int mat[10][10], ans = 100;
int paper[6] = {0,5,5,5,5,5};

bool check(int x, int y, int n) {
    if(x + n > 10 || y + n > 10) return false;
    for(int i=x; i<x+n; i++) {
        for(int j=y; j<y+n; j++) {
            if(mat[i][j] == 0) return false;
        }
    }
    return true;
}

void attach(int x, int y, int n , int value) {
    for(int i = x; i < x + n; i++) {
        for(int j = y; j < y + n; j++) {
            mat[i][j] = value;
        }
    }
}


void sol(int x, int y, int cnt) {
    if( y == 10 ) {
        sol(x+1, 0, cnt);
        return;
    }
    if( x == 10 ) {
        ans = min(cnt, ans);
        return;
    }
    if(mat[x][y] != 1) {
        sol(x, y+1, cnt);
        return;
    }

    for(int i=5; i>=1; i--) {
        if(paper[i] > 0 && check(x, y, i)) {   
            attach(x,y,i,0);
            paper[i]--;
            sol(x,y+1, cnt+1);
            paper[i]++;
            attach(x,y,i,1);
        }
    }

}

int main() {

    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            cin>>mat[i][j];
        }
    }

    sol(0,0,0);
    if(ans == 100) cout<<-1;
    else cout<<ans;


}