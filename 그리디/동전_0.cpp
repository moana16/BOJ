#include<bits/stdc++.h>
using namespace std;

int N,K, cnt = 0;

int main() {
    cin>>N>>K;
    vector<int> coin(N);
    for(int i=0; i<N; i++) cin>>coin[i];

    for(int i=N-1; i>=0; i--) {
        cnt += K / coin[i];
        K %= coin[i];
        
    }
    cout<<cnt;
}