#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    while(T--) {
        int N,M; cin>>N>>M;
        int ans = 0;
        for(int i=N; i<=M; i++) {
            string n = to_string(i);
            ans += count(n.begin(), n.end(), '0');
        }
        cout<<ans<<'\n';
    }
}