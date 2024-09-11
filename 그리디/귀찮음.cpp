#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    int n; cin>>n;

    vector<long long> v(n);
    ll len = 0, ans = 0;

    for(int i=0; i<n; i++) {
        cin>>v[i];
        len += v[i];
    }

    for(int i=0; i<n; i++) {
        ans += v[i] * (len - v[i]);
        len -= v[i];
    }
    cout<<ans;

}
