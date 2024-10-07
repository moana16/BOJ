#include<bits/stdc++.h>
using namespace std;

int R,C,N;
int mat[202][202], tmp[202][202];

void check() {
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(mat[i][j] > 0) mat[i][j] -= 1;
            tmp[i][j] = mat[i][j];
        }
    }
}

void setBomb() {
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(mat[i][j] == -1) mat[i][j] = 3;
            else if(mat[i][j] > 0) mat[i][j] -=1;
            tmp[i][j] = mat[i][j];
        }
    }
}

void bomb() {
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(tmp[i][j] == 0) { // 폭탄 터짐
                mat[i][j] = -1;
                mat[i-1][j] = -1;
                mat[i+1][j] = -1;
                mat[i][j-1] = -1;
                mat[i][j+1] = -1;
            }
        }
    }
}


int main() {
    cin>>R>>C>>N;
    memset(mat, 0, sizeof(mat));

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            char c; cin>>c;
            if(c == 'O') mat[i][j] = 3;
            else mat[i][j] = -1;
        }
    }

    for(int i=1; i<=N; i++) {
        if(i%2 == 1) {
            check();
        }
        else {
            setBomb();
        }
        bomb();
    }

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(mat[i][j] == -1) cout<<".";
            else cout<<"O";
        }
        cout<<'\n';
    }

}