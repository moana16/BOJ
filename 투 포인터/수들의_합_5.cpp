#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ans = 0, sum = 0;

int main() {
    int N; cin>>N;
    
    int st = 1, en = 1;
    
    while(st <= en && en <= N) {
        if(sum < N) sum += en++;
        else {
            if(sum == N) ans++;
            sum -= st++;
        }
    }

    cout<<ans+1;
}