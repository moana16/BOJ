#include<bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,M; cin>>N>>M;
    vector<int> A(N), B(M);

    for(int i=0; i<N; i++) cin>>A[i];
    for(int i=0; i<M; i++) cin>>B[i];

    vector<int> ans;

    int p1 = 0, p2 = 0;

    while(p1 < N && p2 < M) {
        if(A[p1] < B[p2]) ans.push_back(A[p1++]);
        else ans.push_back(B[p2++]);
    }

    while(p1 < N) ans.push_back(A[p1++]);
    while(p2 < M) ans.push_back(B[p2++]);

    for(auto a : ans) cout<<a<<" ";
}