#include<bits/stdc++.h>
using namespace std;

int main() {
    bool isPrime[10003];
    memset(isPrime, true, sizeof(isPrime));

    isPrime[0] = isPrime[1] = false;

    for(int i=2; i*i <= 10000; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<=10000; j += i) {
                isPrime[j] = false;
            }
        }
    }
    int M,N; cin>>M>>N;
    long long sum = 0;
    int mn = INT_MAX;

    for(int i=M; i<=N; i++) {
        if(isPrime[i]) {
            sum += i;
            mn = min(mn, i);
        }
    }

    if(sum == 0) cout<<-1;
    else {
        cout<<sum<<"\n"<<mn;
    }

}