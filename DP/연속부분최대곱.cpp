#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin>>N;
    vector<double> v;
    double dp[10003];
    for(int i=0; i<N; i++) {
        double x; cin>>x;
        v.push_back(x);
    }

    dp[0] = v[0];

    for(int i=1; i<N; i++) {
        dp[i] = max(v[i], dp[i-1]*v[i]);
    }

    cout<<fixed<<setprecision(3)<<*max_element(dp, dp+N);

}