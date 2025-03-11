#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin>>T;
    for(int i=1; i<=T; i++) {
        int N,X; cin>>N>>X;
        vector<int> v(N);
        for(int j=0; j<N; j++) cin>>v[j];

        sort(v.begin(), v.end());

        int s=0, e=N-1, cnt = 0;
        while(s < e) {
            int sum = v[s]+v[e];
            if(sum <= X) {
                s++;
                e--;
            }else e--;
            cnt++;
        }
        if(s == e) cnt++;

        cout<<"Case #"<<i<<": "<<cnt<<'\n';
    }
}