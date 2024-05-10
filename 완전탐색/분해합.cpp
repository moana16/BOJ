#include<bits/stdc++.h>
using namespace std;

int N, ans = 0;
int main() {
    cin>>N;
    int start = max(1, N-81);

    for(int i=start; i<N; i++) {
        int sum = i;
        int cur = i;
        while(cur > 0) {
            sum += cur % 10;
            cur /= 10;
        }
        if(sum == N) {
            ans = i;
            break;
        }
    }

    cout<<ans;
}

