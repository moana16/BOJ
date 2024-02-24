#include<bits/stdc++.h>
using namespace std;

int N;
int arr[1002], dp[1001];
vector<int> ans;

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) cin>>arr[i];

    for(int i=1; i<=N; i++) {
        dp[i] = 1;
        for(int j=i-1; j>=1; j--) {
            if(arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }

    int max_len = *max_element(dp+1, dp+N+1);
    cout<<max_len<<'\n';
    
    for(int i=N; i>=1; i--) {
        if(dp[i] == max_len) {
            ans.push_back(arr[i]);
            max_len--;
        } 

    }

    for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<" ";
}