#include<bits/stdc++.h>
using namespace std;

int dp[100003];

int main() {
    int n; cin>>n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin>>v[i];

    dp[0] = v[0];

    for(int i=1; i<n; i++) {
        dp[i] = max(dp[i-1] + v[i], v[i]);
    }

    cout<<*max_element(dp, dp+n);

}