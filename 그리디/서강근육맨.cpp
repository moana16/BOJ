#include<bits/stdc++.h>
using namespace std;

int main() {
    int N; cin>>N;
    vector<long long> v(N);
    for(int i=0; i<N; i++) cin>>v[i];
    sort(v.begin(), v.end());

    int st = 0, en;
    long long mx=0;
    if(N%2 == 0) en = N-1;
    else {
        en = N-2;
        mx = v[N-1];

    }

    while(st < en) {
        mx = max(v[st] + v[en], mx);
        st++;
        en--;
    }

    cout<<mx;
}