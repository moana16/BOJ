#include<bits/stdc++.h>
using namespace std;

int N,K;
int arr[200002];
int cnt[100002];
int MAX = 0;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>N>>K;
    for(int i=0;i<N;i++)cin>>arr[i];

    int start = 0, end = 0;
    cnt[arr[0]]++;
    
    while(end < N) {
        if(cnt[arr[end]] <= K) {
            MAX = max(MAX, end-start+1);
            end++;
            if(end < N) cnt[arr[end]]++;
        }
        else {
            cnt[arr[start]]--;
            start++;
        }
    }
    cout<<MAX;
}