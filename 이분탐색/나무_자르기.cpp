#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int N;
ll M;


int main() {
    cin>>N>>M;
    vector<ll> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    ll s = 0;
    ll e = *max_element(v.begin(),v.end());
    ll ans = 0;


    while(s <= e) {
        ll mid = s + (e - s) / 2;
        ll total = 0;

        for(int i=0; i<N; i++) {
            if(mid <= v[i]) total += v[i] - mid;
        }

        if(total < M) {
            e = mid-1;
        }
        else {
            ans = mid;
            s = mid + 1;
        }

    }
    cout<<ans;
}