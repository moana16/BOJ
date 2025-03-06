#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K; cin>>N>>K;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int s=0, e=N-1, ans = 0;
    while(s < e) {
        if(v[s] + v[e] > K) e--;
        else {
            s++;
            e--;
            ans++;
        }
    }

    cout<<ans;

}
