#include <bits/stdc++.h>
using namespace std;

constexpr int MAX = 1e4+4;

int N;
int arr[MAX];
int dp[MAX];

void sol() {
    int res = 0;
    for(int i=1; i<=N; i++) {
        dp[i]=1;
        for(int j=i-1; j >= 1; j--) {
            if(arr[i]>arr[j]) dp[i]=max(dp[i],dp[j]+1);
        }
        res = max(dp[i],res);
    }
    

    cout<<res;

}

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) {
        cin>>arr[i];
    }
    sol();
}