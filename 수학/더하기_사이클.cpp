#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    int ans = 1;
    int tmp;

    if(N < 10) {
        tmp = N*10 + N;
    }
    else {
        int sum = N/10 + N%10;
        tmp = (N%10) * 10 + sum%10;
    }

    while(true) {
        
        if(tmp == N) break;

        if(tmp < 10) {
            tmp = tmp*10 + tmp;
        }
        else {
            int sum = tmp/10 + tmp%10;
            tmp = (tmp%10) * 10 + sum%10;
        }
        ans++;

    }
    cout<<ans;
}