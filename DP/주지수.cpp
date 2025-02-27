#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int mat[1030][1030];
ll pSum[1030][1030] = {0};
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) {
            cin>>mat[i][j];
            pSum[i][j] = pSum[i][j-1] + pSum[i-1][j] - pSum[i-1][j-1] + mat[i][j];
        }
    }

    int K; cin>>K;
    while(K--) {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<pSum[x2][y2] - pSum[x1-1][y2] - pSum[x2][y1-1] + pSum[x1-1][y1-1]<<'\n';
    }
    
}