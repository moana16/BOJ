#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<int> h(N);
    for(int i=0; i<N; i++) cin>>h[i];

    int mx = h[0];
    int cnt = 1;
    for(int i=1; i<N; i++) {
        if(h[i] > mx) {
            cnt++;
            mx = h[i];
        }
    }

    cout<<cnt<<'\n';

    mx = h[N-1];
    cnt = 1;

    for(int i=N-2; i>=0; i--) {
        if(h[i] > mx) {
            cnt++;
            mx = h[i];
        }
    }

    cout<<cnt;
}