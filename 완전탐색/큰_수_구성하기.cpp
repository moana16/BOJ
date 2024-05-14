#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll N;
int K;
vector<int> v;
ll ans = 0;

void sol(ll cur, int len, int idx) {
    if(N >= cur && ans < cur) ans = cur;
    if(idx == len) return;
    for(int i=0; i<K; i++) {
        sol(cur*10 + v[i], len, idx+1);
    }

}

int main() {
    cin>>N>>K;
    for(int i=0; i<K; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    int len = to_string(N).length();
    for(int i=0; i<K; i++) {
        sol(v[i], len, 1);
    }
    
    cout<<ans;

}