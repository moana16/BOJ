#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N,K; cin>>N>>K;

    vector<int> S(N+1), D(N+1), rev(N+1), tmp(N+1);

    for(int i=1; i<=N; i++) cin>>S[i];
    for(int i=1; i<=N; i++) cin>>D[i];

    for(int i=1; i<=N; i++) {
        rev[D[i]] = i;
    }

    for(int i=1; i<=N; i++) {
        int idx = i;
        for(int t=0; t<K; t++) {
            idx = rev[idx];
        }
        tmp[i] = S[idx];
    }

    for(int i=1; i<=N; i++) cout<<tmp[i]<<" ";


}