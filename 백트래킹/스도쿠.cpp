#include<bits/stdc++.h>
using namespace std;

int sdk[9][9];

bool check(int x, int y, int val) {
    for(int i=0; i<9; i++) {
        if(sdk[x][i] == val) return false; 
    }

    for(int i=0; i<9; i++) {
        if(sdk[i][y] == val) return false; 
    }

    int sx = 3 * (x / 3);
    int sy = 3 * (y / 3);
    for(int i = sx; i<sx + 3; i++) {
        for(int j = sy; j<sy + 3; j++) {
            if(sdk[i][j] == val) return false;
        }
    }
    return true;
}

bool sol(int x, int y) {
    if(x == 9) return true;
    if(y == 9) return sol(x+1, 0);
    if(sdk[x][y] != 0) return sol(x, y+1);

    for(int i=1; i<=9; i++) {
        if(check(x,y,i)) {
            sdk[x][y] = i;
            if(sol(x, y+1)) return true;
            sdk[x][y] = 0;
        }
        
    }
    return false;
}

int main() {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cin>>sdk[i][j];

        }
    }

    sol(0,0);


    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cout<<sdk[i][j]<<" ";
        }
        cout<<"\n";
    }

}