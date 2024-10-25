#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,S; cin>>N>>S;
    vector<int> v(N);
    for(int i=0; i<N; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int st = 0;
    int en = 1;
    int cnt = 0;

    while(st < en && en < N) {
        int len = v[st] + v[en];
        if(len <= S) {
            cnt++;
            if(en == N-1) {
                st++;
                en = st+1;
            }
            else en++;
        }else {
            st++;
            en = st+1;
        }
    }
    cout<<cnt;
}

