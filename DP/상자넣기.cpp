#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> boxes(n+1);
    for(int i=1; i<=n; i++) cin>>boxes[i];

    int dp[1003];
    fill(dp+1, dp+n+1, 1);

    dp[1] = 1;
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(boxes[i] > boxes[j]) dp[i] = max(dp[i], dp[j]+1);
        }
    }

    cout<<*max_element(dp+1, dp+n+1);

}