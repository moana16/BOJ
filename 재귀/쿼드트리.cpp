#include <bits/stdc++.h>
using namespace std;
char arr[65][65];

void sol(int x, int y, int n) {
    char first_el = arr[x][y];
    bool flag = true;

    for(int i=x; i<x+n; i++) {
        for(int j=y; j<y+n; j++) {
            if(arr[i][j] != first_el) {
                flag = false;
                break;
                }
        }
    }
    if(flag) {
        cout<<first_el;
        return;
    }
    cout<<"(";
    sol(x, y, n/2);
    sol(x, y + n/2, n/2);
    sol(x + n/2, y, n/2);
    sol(x + n/2, y+ n/2, n/2);
    cout<<")";

}

int main() {
    int n; cin>>n;

    for(int i=0; i<n; i++) {
        string s; cin>>s;
        for(int j=0; j<n; j++)  arr[i][j] = s[j];
    }
    sol(0,0,n);

}