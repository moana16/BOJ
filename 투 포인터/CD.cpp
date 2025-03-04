#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    while(true) {
        int N,M; cin>>N>>M;

        if(N == 0 && M == 0) break;

        vector<int> A(N), B(M);
        for(int i=0; i<N; i++) cin>>A[i];
        for(int i=0; i<M; i++) cin>>B[i];

        int i=0, j=0, ans = 0;

        while(i < N && j < M){
            if(A[i] == B[j]) {
                ans++;
                i++;
                j++;
            }else if(A[i] < B[j]) i++;
            else j++;
        }

        cout<<ans<<'\n';

    }
    
}