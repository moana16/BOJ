#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<pair<int,int>> v(n);

    for(int i=0; i<n; i++) cin>>v[i].second;
    for(int i=0; i<n; i++) cin>>v[i].first;

    sort(v.begin(), v.end());

    long long ans = 0;

    for(int i=0; i<n; i++) ans += v[i].second + v[i].first * i;

    cout<<ans;
}
