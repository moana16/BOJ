#include<bits/stdc++.h>
using namespace std;

int N,M,K;
int mat[303][303];
int pre[303][303];

int main() {
    cin>>N>>M;
    for(int i=1; i<=N; i++ ) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + mat[i][j];
        }
    }

    cin>>K;
    int i,j,x,y;
    while(K--) {
        cin>>i>>j>>x>>y;
        int sum = pre[x][y] - pre[x][j-1] - pre[i-1][y] + pre[i-1][j-1];
        cout<<sum<<'\n';
        
    }

}