#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pSum[100003];
int N, ans = 0x7f7f7f7f;
ll S;

int main() {
    cin>>N>>S;
    for(int i=1; i<=N; i++) {
        int x; cin>>x;
        pSum[i] = pSum[i-1] + x;
    }

    int st = 1, en = 1;

    while(en <= N && st <= N) {
        ll sum = pSum[en] - pSum[st-1];
        if(sum >= S) {
            ans = min(ans, en-st+1);
            st++;
        } 
        else en++;
    }
    if(ans == 0x7f7f7f7f) cout<<0;
    else cout<<ans;
}