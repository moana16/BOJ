#include<bits/stdc++.h>
using namespace std;

int main() {
    bool isPrime[1003];
    memset(isPrime, true, sizeof(isPrime));

    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i<=1000; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<=1000; j += i) {
                isPrime[j] = false;
            }     
        }
    }

    int N; cin>>N;
    int cnt = 0;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        if(isPrime[x]) cnt++;
    }

    cout<<cnt;

}