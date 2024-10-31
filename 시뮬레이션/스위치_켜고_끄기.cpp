#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> states(n+1);
    for(int i=1; i<=n; i++) cin>>states[i];

    int m; cin>>m;
    while (m--) {
        int a,b; cin>>a>>b;
        if(a == 1) {
            for(int j=b; j<=n; j += b) {
                if(states[j] == 0) states[j] = 1;
                else states[j] = 0;
            }

        }else {
            int tmp = min(n-b+1, b-1);
            int cnt=0;
            while (b - cnt >= 1 && b + cnt <= n && states[b - cnt] == states[b + cnt]) {
                cnt++;
            }
            cnt--;
            for(int j=b-cnt; j<=b+cnt; j++) {
                if(states[j] == 0) states[j] = 1;
                else states[j] = 0;
            }
        }
    }

    for(int i=1; i<=n; i++) {
        cout<<states[i]<<" ";
        if(i%20 == 0) cout<<'\n';

    }
}