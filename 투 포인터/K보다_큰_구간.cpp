#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int k; cin>>k;

    int s=0, e=0;
    ll total = 0, cnt = 0;

    for(int s=0; s<n; s++) {
        while(e < n && total + v[e] <= k) {
            total += v[e];
            e++;
        }
        cnt += (n-e);
        total -= v[s];
    }

    cout<<cnt;
}