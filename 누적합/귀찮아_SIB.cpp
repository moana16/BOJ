#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> x(n+1), pSum(n+1);
    for(int i=1; i<=n; i++) {
        cin>>x[i];
        pSum[i] = x[i] + pSum[i-1];
    }

    long long sum = 0;

    for(int i=2; i<=n; i++) {
        sum += x[i] * pSum[i-1];
    }

    cout<<sum;
}

