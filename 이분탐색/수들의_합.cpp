#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main() {
    ll s; cin>>s;

    ll l=0, r = s, ans = 0;

    while(l <= r) {
        ll mid = (l+r)/2;
        ll sum = mid * (mid+1)/2;

        if(sum <= s) {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    cout<<ans;



}