#include <bits/stdc++.h>
using namespace std;

int arr[100003];
int MIN = 0x7fffffff;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N,S; cin>>N>>S;
    for(int i=0; i<N; i++) cin>>arr[i];
    int en = 0, sum = arr[0];
    for(int st = 0; st<N; st++) {
        while(en < N && sum < S) {
            en++;
            if(en != N) sum += arr[en];
        }

        if(en == N) break;
        MIN = min(MIN, en-st+1);
        sum -= arr[st];
        
    }
    if(MIN == 0x7fffffff) cout<<0;
    else cout<<MIN;
}