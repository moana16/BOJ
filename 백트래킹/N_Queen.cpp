#include<bits/stdc++.h>
using namespace std;

int N, cnt = 0;
bool usedRow[30];
bool usedDiag[30];
bool usedDiag2[30];

int mat[17][17];

void sol(int x) {
    if(x == N) {
        cnt++;
        return;
    }

    for(int y=0; y<N; y++) {
        if(usedRow[y] || usedDiag[x + y] || usedDiag2[x - y + N - 1]) continue;
        usedRow[y] = true;
        usedDiag[x + y] = true;
        usedDiag2[x - y + N - 1] = true;
        sol(x + 1);
        usedRow[y] = false;
        usedDiag[x + y] = false;
        usedDiag2[x - y + N - 1] = false;
    }
}

int main() {
    cin>>N;
    sol(0);
    cout<<cnt;

}