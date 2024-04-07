#include<bits/stdc++.h>
using namespace std;

long long N, B, C, ans;
vector<long long> v;


int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    cin>>N;
    long long x;
    for(int i=0; i<N; i++) {
        cin>>x; v.push_back(x);
    }
    cin>>B>>C;

    ans = N;

    for(int i=0; i<N; i++) {
        v[i] = v[i] - B;
        if(v[i] <= 0) continue;
        ans += (v[i] / C);
        if((v[i] % C) > 0) ans += 1;
    }
    cout<<ans;

}