#include<bits/stdc++.h>
using namespace std;

double drink[100005];
int N;
long double ans;

int main() {
    cin>>N;
    for(int i=1; i<=N; i++) cin>>drink[i];
    sort(drink+1, drink+N+1);

    ans = drink[N] + drink[N-1] / 2;

    for(int i = N-2; i>=1; i--) {
        ans += drink[i]/2;
    }

    cout<<ans;
}

