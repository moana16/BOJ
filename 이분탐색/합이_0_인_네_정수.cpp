#include <bits/stdc++.h>
using namespace std;
int A[4004],B[4004], C[4004],D[4004];
int cd[16000002];



int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N; cin>>N;
    for(int i=0; i<N; i++) cin>>A[i]>>B[i]>>C[i]>>D[i];
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cd[i*N + j] = C[i] + D[j];
        }
    }
    sort(cd, cd+N*N);

    long long ans = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            ans += upper_bound(cd, cd + N*N, -A[i]-B[j]) - lower_bound(cd, cd+N*N, -A[i]-B[j]);
        }
    }
    cout<<ans;




}