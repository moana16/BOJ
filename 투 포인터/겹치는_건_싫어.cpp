#include<bits/stdc++.h>
using namespace std;

int N,K,ans = 0;
int arr[200003];
map<int,int> mp;

int main() {
    cin>>N>>K;
    for(int i=1; i<=N; i++) cin>>arr[i];
    int st = 1;
    int en = 1;
    
    while (en <= N)
    {
        mp[arr[en]]++;

        while(mp[arr[en]] > K) { //앞에 원소들 빈도수 초기화
            mp[arr[st]]--;
            st++;
        }
        ans = max(ans, en-st+1);
        en++;
    }
    cout<<ans;
    
}
