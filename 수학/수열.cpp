#include<bits/stdc++.h>
using namespace std;

int MX = -0x7f7f7f;
int sum[100004];
int main() {
    int n, k; cin>>n>>k;
    for(int i=1; i<=n; i++) {
        int x; cin>>x; 
        sum[i] = sum[i-1] + x;
    }

    for(int i=k; i<=n; i++) {
        MX = max(MX, sum[i] - sum[i-k]);
    }

    cout<<MX;
}