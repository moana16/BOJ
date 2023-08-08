#include <bits/stdc++.h>
using namespace std;

char board[2300][2300];

void sol(int x, int y, int n) {
    if(n == 1) {
        board[x][y] = '*';
        return;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == 1 && j == 1) continue;
            sol(x + n/3 * i, y + n/3 * j, n/3 );
        }
    }

}

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) fill(board[i], board[i]+n, ' ');
    sol( 0, 0, n);
    for(int i=0; i<n; i++) cout<<board[i]<<'\n';
}

