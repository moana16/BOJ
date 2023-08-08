#include <bits/stdc++.h>
using namespace std;
int mat[2200][2200];
int cnt1 = 0;
int cnt2 = 0;
int cnt3 = 0;

void sol(int x, int y, int n) {
    int first = mat[x][y];
    bool flag = false;
    if(n == 0) return;

    for(int i = x; i < x + n; i++) {
        for(int j = y; j < y + n; j++) {
            if(mat[i][j] != first) {
                flag = true;
                break;
            }
        }
    }
    if(!flag) {
        if(first == -1) cnt1++;
        else if(first == 0) cnt2++;
        else cnt3++;
        return;
    }
    n = n/3;
    sol(x, y, n);
    sol(x, y+n, n);
    sol(x, y+(2*n), n);
    sol(x + n, y, n);
    sol(x + n, y+n, n);
    sol(x + n, y+(2*n), n);
    sol(x + (2*n), y, n);
    sol(x + (2*n), y + n, n);
    sol(x + (2*n), y+(2*n), n);
}

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int x; cin>>x;
            mat[i][j] = x;
        }
    }

    sol(0,0,n);
    cout<<cnt1<<'\n';
    cout<<cnt2<<'\n';
    cout<<cnt3<<'\n';
}