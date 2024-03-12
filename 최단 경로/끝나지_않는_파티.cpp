#include<bits/stdc++.h>
using namespace std;

int N,M;
int d[505][505];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>M;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            cin>>d[i][j];
        }
    }

    for(int k=1; k<=N; k++) {
        for(int i=1; i<=N; i++) {
            for(int j=1; j<=N; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    int a,b,c; 
    while(M--) {
        cin>>a>>b>>c;
        if(d[a][b] > c) cout<<"Stay here\n";
        else cout<<"Enjoy other party\n";
    }


}