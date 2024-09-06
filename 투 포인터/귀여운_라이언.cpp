#include<bits/stdc++.h>
using namespace std;

int N,K,mn = 1000001;

int pL[1000003];

int main() {
    cin>>N>>K;
    fill(pL, pL + N + 1, 0);

    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        if(x == 1) pL[i] = pL[i-1] + 1;
        else pL[i] = pL[i-1];

    }

    int s = 1;
    int e = K;

    while(e <= N) {
        int tmp = pL[e+1] - pL[s];

        if(tmp >= K) {
            mn = min(mn, e-s + 1);
            s++;

        }
        else e++;
    }
    if(mn == 1000001) cout<<-1;
    else cout<<mn;
}