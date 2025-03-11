#include<bits/stdc++.h>
using namespace std;
int mat[1000003];
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N, K; cin>>N>>K;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++) {
        int g,x; cin>>g>>x;
        v.push_back({x,g});
    }
    sort(v.begin(), v.end());

    int l=0,r=0, sum = 0, ans = 0;

    while(r < N) {
        sum += v[r].second;

        while(v[r].first - v[l].first > 2 * K) {
            sum -= v[l].second;
            l++;
        } 
        ans = max(ans, sum);
        r++;
    }
    cout<<ans;
}