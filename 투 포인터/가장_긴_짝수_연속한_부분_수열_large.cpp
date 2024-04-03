#include<bits/stdc++.h>
using namespace std;

int N,K; 
vector<int> v;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin>>N>>K;
    for(int i=0; i<N; i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    
    int st = 0, en = 0, mx = 0, cnt=0;

    while(en < N) {
        if(cnt > K) {
            if(v[st] % 2 == 1) cnt--;
            st++;
        }
        else {
            if(v[en] % 2 == 1) cnt++;
            en++;
        }
        if(cnt <= K) mx = max(mx, en-st-cnt);
    }

    cout<<mx;
}