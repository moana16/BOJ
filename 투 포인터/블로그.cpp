#include<bits/stdc++.h>
using namespace std;

int N,X, ans = 0, mx = 0;
int pSum[250002];

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>X;
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        pSum[i] += pSum[i-1] + x;
    }

    int st = 1;
    int en = X;


    while(en <= N) {
        int tmp = pSum[en] - pSum[st-1];
        if(mx < tmp) {
            mx = tmp;
            ans = 1;
        }
        else if(mx == tmp) ans++;
        st++;
        en = st + X-1;
    }

    if(mx == 0) cout<<"SAD";
    else {
        cout<<mx<<'\n'<<ans;

    }
}