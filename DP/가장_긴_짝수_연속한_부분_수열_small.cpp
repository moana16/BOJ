#include<bits/stdc++.h>
using namespace std;

int N, K;
int arr[50005];
int dp[50005][103];
//슬라이딩 윈도우 알고리즘?
int main() {
    cin>>N>>K;
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    } 
    int ans = 0, cnt_odd = 0, s = 0 ;
    for(int e = 0; e < N; e++) {
        if(arr[e]%2 != 0) cnt_odd++;

        while(cnt_odd > K) {
        if(arr[s]%2 != 0) cnt_odd--;
        s++;
        }
        ans = max(ans, e-s+1-cnt_odd);
    }
    cout<<ans;

    


}