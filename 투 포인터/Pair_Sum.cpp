#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        int N,M; cin>>N>>M;
        vector<int> v(N);
        for(int j=0; j<N; j++) cin>>v[j];

        sort(v.begin(), v.end());
        int s=0, e=N-1, cnt = 0;

        while(s < e) {
            ll sum = v[s] + v[e];
            if(sum == M) {
                cnt++;
                s++;
                e--;
            }else if(sum < M) s++;
            else e--;

        }

        cout<<"Case #"<<i<<": "<<cnt<<'\n';
    }
}