#include<bits/stdc++.h>
using namespace std;

int dp[50005][103];


int main() {
    int N,K; cin>>N>>K;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    int ans = 0, cnt_odd = 0, s = 0;

    for(int e=0; e<N; e++) {
        if(v[e] % 2 == 1) cnt_odd++;

        while(cnt_odd > K) {
            if(v[s] % 2 == 1) cnt_odd--;
            s++;
        }
        ans = max(ans, e-s+1-cnt_odd);
    }

    cout<<ans;
}