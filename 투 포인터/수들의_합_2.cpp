#include <bits/stdc++.h>
using namespace std;

int N;
long long M;
int arr[10005];
int st, en;
int ans = 0;
int main() {
    cin>>N>>M;
    for(int i=0; i<N; i++) cin>>arr[i];
    st = 0;
    en = 0;
    while(en < N) {
        int sum = accumulate(arr+st, arr+en+1,0);
        if(sum > M) st++;
        else if(sum < M) en++;
        else {
            ans++;
            st++;
        }
    }
    cout<<ans;

}