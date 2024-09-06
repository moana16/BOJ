#include<bits/stdc++.h>
using namespace std;

int N, X, mx = 0, cnt = 1;
int pSum[250005];

int main() {
    cin >> N >> X;
    for(int i = 1; i <= N; i++) {
        int m;
        cin >> m;
        pSum[i] = pSum[i-1] + m;
    }

    for(int i = 0; i <= N - X; i++) { 
        int tmp = pSum[i + X] - pSum[i]; 
        if(mx == tmp) cnt++;
        else if(mx < tmp) {
            cnt = 1;
            mx = tmp;
        }
    }

    if(mx == 0) cout << "SAD";
    else {
        cout << mx << '\n' << cnt;
    }

    return 0;
}
