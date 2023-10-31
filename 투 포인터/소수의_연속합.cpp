#include <bits/stdc++.h>
using namespace std;

int ans=0;
bool isPrime[4000004];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int N; cin>>N;
    fill(isPrime, isPrime+N+1, true);

    isPrime[1] = false;
    for(int i=2; i<=N; i++) {
        if(isPrime[i]) {
            for(int j=i*2; j<= N; j += i) isPrime[j] = false;
        }
    }
    
    
    if(isPrime[N]) ans++;
    for(int st=2; st<=N; st++) {
        int sum = st;
        int en = st;
        if(!isPrime[st]) continue;
        while(en < N && sum < N) {
            en++;
            if(isPrime[en]) sum += en;

        }
        if(en == N) break;
        if(sum == N) ans++;

    }
    cout<<ans;

}